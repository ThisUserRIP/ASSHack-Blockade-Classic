#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_UnityAnalyticsModule::UnityEngine::Analytics { struct AnalyticsSessionInfo_SessionStateChanged; };
namespace UnityEngine_UnityAnalyticsModule::UnityEngine::Analytics { struct AnalyticsSessionInfo_IdentityTokenChanged; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Analytics_AnalyticsSessionState.h"
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };

namespace UnityEngine_UnityAnalyticsModule::UnityEngine::Analytics
{
	struct AnalyticsSessionInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_UnityAnalyticsModule::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged* sessionStateChanged;
			UnityEngine_UnityAnalyticsModule::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged* identityTokenChanged;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void CallSessionStateChanged(UnityEngine_UnityAnalyticsModule::UnityEngine::Analytics::AnalyticsSessionState sessionState, int64_t sessionId, int64_t sessionElapsedTime, bool sessionChanged);
		static void CallIdentityTokenChanged(mscorlib::System::String* token);
	};
}

