#pragma once
namespace System::System::Net::Cache
{
	enum struct HttpRequestCacheLevel : int32_t
	{
		Default = static_cast<int32_t>(0x0),
		BypassCache = static_cast<int32_t>(0x1),
		CacheOnly = static_cast<int32_t>(0x2),
		CacheIfAvailable = static_cast<int32_t>(0x3),
		Revalidate = static_cast<int32_t>(0x4),
		Reload = static_cast<int32_t>(0x5),
		NoCacheNoStore = static_cast<int32_t>(0x6),
		CacheOrNextCacheOnly = static_cast<int32_t>(0x7),
		Refresh = static_cast<int32_t>(0x8),
	};
}

