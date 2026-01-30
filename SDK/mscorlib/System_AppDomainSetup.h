#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System
{
	struct AppDomainSetup : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* application_base;
		mscorlib::System::String* application_name;
		mscorlib::System::String* cache_path;
		mscorlib::System::String* configuration_file;
		mscorlib::System::String* dynamic_base;
		mscorlib::System::String* license_file;
		mscorlib::System::String* private_bin_path;
		mscorlib::System::String* private_bin_path_probe;
		mscorlib::System::String* shadow_copy_directories;
		mscorlib::System::String* shadow_copy_files;
		bool publisher_policy;
		bool path_changed;
		int32_t loader_optimization;
		bool disallow_binding_redirects;
		bool disallow_code_downloads;
		mscorlib::System::Object* _activationArguments;
		mscorlib::System::Object* domain_initializer;
		mscorlib::System::Object* application_trust;
		IL2CPP::Array<mscorlib::System::String*>* domain_initializer_args;
		bool disallow_appbase_probe;
		IL2CPP::Array<uint8_t>* configuration_bytes;
		IL2CPP::Array<uint8_t>* serialized_non_primitives;
		mscorlib::System::String* _TargetFrameworkName_k__BackingField;
		void _ctor();
		void _ctor(mscorlib::System::AppDomainSetup* setup);
		static mscorlib::System::String* GetAppBase(mscorlib::System::String* appBase);
		mscorlib::System::String* get_ApplicationBase();
		mscorlib::System::String* get_LicenseFile();
	};
}

