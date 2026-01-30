#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_UnityAnalyticsModule::UnityEngine { struct RemoteSettings_UpdatedEventHandler; };
namespace mscorlib::System { struct Action; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { template <typename T1, typename T2, typename T3> struct Action_3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UnityAnalyticsModule::UnityEngine
{
	struct RemoteSettings : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_UnityAnalyticsModule::UnityEngine::RemoteSettings_UpdatedEventHandler* Updated;
			mscorlib::System::Action* BeforeFetchFromServer;
			mscorlib::System::Action_3<mscorlib::System::Boolean, mscorlib::System::Boolean, mscorlib::System::Int32>* Completed;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void RemoteSettingsUpdated(bool wasLastUpdatedFromServer);
		static void RemoteSettingsBeforeFetchFromServer();
		static void RemoteSettingsUpdateCompleted(bool wasLastUpdatedFromServer, bool settingsChanged, int32_t response);
	};
}

