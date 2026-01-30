#pragma once
namespace mscorlib::Microsoft::Win32
{
	enum struct UnsafeNativeMethods_ManifestEtw_TRACE_QUERY_INFO_CLASS : int32_t
	{
		TraceGuidQueryList = static_cast<int32_t>(0x0),
		TraceGuidQueryInfo = static_cast<int32_t>(0x1),
		TraceGuidQueryProcess = static_cast<int32_t>(0x2),
		TraceStackTracingInfo = static_cast<int32_t>(0x3),
		MaxTraceSetInfoClass = static_cast<int32_t>(0x4),
	};
}

