#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::Doozy::Engine::Soundy { struct SoundyDatabase; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine::Soundy { struct SoundyPooler; };

namespace Assembly_CSharp::Doozy::Engine::Soundy
{
	struct SoundySettings : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::Soundy::SoundyDatabase* database;
		bool AutoKillIdleControllers;
		float ControllerIdleKillDuration;
		float IdleCheckInterval;
		int32_t MinimumNumberOfControllers;
		struct StaticFields
		{
			mscorlib::System::String* FILE_NAME;
			Assembly_CSharp::Doozy::Engine::Soundy::SoundySettings* s_instance;
			bool AUTO_KILL_IDLE_CONTROLLERS_DEFAULT_VALUE;
			float CONTROLLER_IDLE_KILL_DURATION_DEFAULT_VALUE;
			float CONTROLLER_IDLE_KILL_DURATION_MIN;
			float CONTROLLER_IDLE_KILL_DURATION_MAX;
			float IDLE_CHECK_INTERVAL_DEFAULT_VALUE;
			float IDLE_CHECK_INTERVAL_MIN;
			float IDLE_CHECK_INTERVAL_MAX;
			int32_t MINIMUM_NUMBER_OF_CONTROLLERS_DEFAULT_VALUE;
			int32_t MINIMUM_NUMBER_OF_CONTROLLERS_MIN;
			int32_t MINIMUM_NUMBER_OF_CONTROLLERS_MAX;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* get_ResourcesPath();
		static Assembly_CSharp::Doozy::Engine::Soundy::SoundySettings* get_Instance();
		static Assembly_CSharp::Doozy::Engine::Soundy::SoundyDatabase* get_Database();
		static void UpdateDatabase();
		void Reset();
		void Reset(bool saveAssets);
		void ResetComponent(Assembly_CSharp::Doozy::Engine::Soundy::SoundyPooler* pooler);
		void SetDirty(bool saveAssets);
		void UndoRecord(mscorlib::System::String* undoMessage);
		void _ctor();
	};
}

