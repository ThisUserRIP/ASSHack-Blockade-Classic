#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Resources_ResourceManager.h"
namespace mscorlib::System::Resources { struct ResourceManager; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Version; };
namespace mscorlib::System::Reflection { struct Assembly; };
#include "System_Resources_UltimateResourceFallbackLocation.h"
namespace mscorlib::System::Reflection { struct RuntimeAssembly; };

namespace mscorlib::System::Resources
{
	struct ResourceManager_ResourceManagerMediator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Resources::ResourceManager* _rm;
		void _ctor(mscorlib::System::Resources::ResourceManager* rm);
		mscorlib::System::String* get_ModuleDir();
		mscorlib::System::Type* get_LocationInfo();
		mscorlib::System::Type* get_UserResourceSet();
		mscorlib::System::String* get_BaseNameField();
		mscorlib::System::Globalization::CultureInfo* get_NeutralResourcesCulture();
		mscorlib::System::String* GetResourceFileName(mscorlib::System::Globalization::CultureInfo* culture);
		bool get_LookedForSatelliteContractVersion();
		void set_LookedForSatelliteContractVersion(bool value);
		mscorlib::System::Version* get_SatelliteContractVersion();
		void set_SatelliteContractVersion(mscorlib::System::Version* value);
		mscorlib::System::Version* ObtainSatelliteContractVersion(mscorlib::System::Reflection::Assembly* a);
		mscorlib::System::Resources::UltimateResourceFallbackLocation get_FallbackLoc();
		mscorlib::System::Reflection::RuntimeAssembly* get_CallingAssembly();
		mscorlib::System::Reflection::RuntimeAssembly* get_MainAssembly();
		mscorlib::System::String* get_BaseName();
	};
}

