#include "zstd.h"

namespace Upp {
	
void sCompressStreamCopy_(Stream& out, Stream& in, EventGate<int64, int64> progress, Stream& orig_in, int64 insz);

static int64 sZstdCompress(Stream& out, Stream& in, int64 size, EventGate<int64, int64> progress, bool co)
{
	ZstdCompressStream outs(out);
#ifdef _MULTITHREADED
	if(co)
		outs.Concurrent();
#endif
	sCompressStreamCopy_(outs, in, progress, in, size);
	outs.Close();
	if(!out.IsError() && !outs.IsError())
		return out.GetSize();
	return -1;
}

static int64 sZstdDecompress(Stream& out, Stream& in, int64 size, EventGate<int64, int64> progress, bool co)
{
	ZstdDecompressStream ins(in);
#ifdef _MULTITHREADED
	if(co)
		ins.Concurrent();
#endif
	sCompressStreamCopy_(out, ins, progress, in, size);
	ins.Close();
	if(!out.IsError() && !ins.IsError())
		return out.GetSize();
	return -1;
}

int64 ZstdCompress(Stream& out, Stream& in, EventGate<int64, int64> progress)
{
	return sZstdCompress(out, in, in.GetLeft(), progress, false);
}

int64 ZstdDecompress(Stream& out, Stream& in, EventGate<int64, int64> progress)
{
	return sZstdDecompress(out, in, in.GetLeft(), progress, false);
}

String ZstdCompress(const void *data, int64 len, EventGate<int64, int64> progress)
{
	StringStream out;
	MemReadStream in(data, len);
	return ZstdCompress(out, in, progress) < 0 ? String::GetVoid() : out.GetResult();
}

String ZstdCompress(const String& s, EventGate<int64, int64> progress)
{
	return ZstdCompress(~s, s.GetLength(), progress);
}

String ZstdDecompress(const void *data, int64 len, EventGate<int64, int64> progress)
{
	StringStream out;
	MemReadStream in(data, len);
	return ZstdDecompress(out, in, progress) < 0 ? String::GetVoid() : out.GetResult();
}

String ZstdDecompress(const String& s, EventGate<int64, int64> progress)
{
	return ZstdDecompress(~s, s.GetLength(), progress);
}

#ifdef _MULTITHREADED

int64 CoZstdCompress(Stream& out, Stream& in, EventGate<int64, int64> progress)
{
	return sZstdCompress(out, in, in.GetLeft(), progress, true);
}

int64 CoZstdDecompress(Stream& out, Stream& in, EventGate<int64, int64> progress)
{
	return sZstdDecompress(out, in, in.GetLeft(), progress, true);
}

String CoZstdCompress(const void *data, int64 len, EventGate<int64, int64> progress)
{
	StringStream out;
	MemReadStream in(data, len);
	return CoZstdCompress(out, in, progress) < 0 ? String::GetVoid() : out.GetResult();
}

String CoZstdCompress(const String& s, EventGate<int64, int64> progress)
{
	return CoZstdCompress(~s, s.GetLength(), progress);
}

String CoZstdDecompress(const void *data, int64 len, EventGate<int64, int64> progress)
{
	StringStream out;
	MemReadStream in(data, len);
	return CoZstdDecompress(out, in, progress) < 0 ? String::GetVoid() : out.GetResult();
}

String CoZstdDecompress(const String& s, EventGate<int64, int64> progress)
{
	return CoZstdDecompress(~s, s.GetLength(), progress);
}

#endif

};