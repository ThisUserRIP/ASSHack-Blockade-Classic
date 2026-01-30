#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_Networking_Types_SourceID.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UNETModule::UnityEngine::Networking::Match
{
	struct Request : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UNETModule::UnityEngine::Networking::Types::SourceID _sourceId_k__BackingField;
		mscorlib::System::String* _projectId_k__BackingField;
		mscorlib::System::String* _accessTokenString_k__BackingField;
		int32_t _domain_k__BackingField;
		struct StaticFields
		{
			int32_t currentVersion;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		UnityEngine_UNETModule::UnityEngine::Networking::Types::SourceID get_sourceId();
		mscorlib::System::String* get_projectId();
		mscorlib::System::String* get_accessTokenString();
		int32_t get_domain();
		void set_domain(int32_t value);
		mscorlib::System::String* ToString();
		void _ctor();
		static void _cctor();
	};
}

