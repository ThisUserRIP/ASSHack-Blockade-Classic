#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Reflection { struct Assembly; };
#include "UnityEngine_Networking_NetworkSystem_CRCMessageEntry.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem { struct CRCMessageEntry; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct NetworkCRC : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Int32>* m_Scripts;
		bool m_ScriptCRCCheck;
		struct StaticFields
		{
			com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkCRC* s_Singleton;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkCRC* get_singleton();
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Int32>* get_scripts();
		static bool get_scriptCRCCheck();
		static void set_scriptCRCCheck(bool value);
		static void ReinitializeScriptCRCs(mscorlib::System::Reflection::Assembly* callingAssembly);
		static void RegisterBehaviour(mscorlib::System::String* name, int32_t channel);
		static bool Validate(IL2CPP::Array<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::CRCMessageEntry>* scripts, int32_t numChannels);
		bool ValidateInternal(IL2CPP::Array<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::CRCMessageEntry>* remoteScripts, int32_t numChannels);
		void Dump(IL2CPP::Array<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::CRCMessageEntry>* remoteScripts);
		void _ctor();
	};
}

