#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_Statistics_StatisticsQueryFlags.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };

namespace Assembly_CSharp::BestHTTP::Statistics
{
	struct GeneralStatistics
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::Statistics::StatisticsQueryFlags QueryFlags;
		int32_t Connections;
		int32_t ActiveConnections;
		int32_t FreeConnections;
		int32_t RecycledConnections;
		int32_t RequestsInQueue;
		int32_t CacheEntityCount;
		uint64_t CacheSize;
		int32_t CookieCount;
		uint32_t CookieJarSize;
	};
}

