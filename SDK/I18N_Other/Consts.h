#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };

namespace I18N_Other
{
	struct Consts : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::String* MonoVersion;
			mscorlib::System::String* MonoCompany;
			mscorlib::System::String* MonoProduct;
			mscorlib::System::String* MonoCopyright;
			mscorlib::System::String* FxVersion;
			mscorlib::System::String* VsVersion;
			mscorlib::System::String* FxFileVersion;
			mscorlib::System::String* VsFileVersion;
			mscorlib::System::String* AssemblyI18N;
			mscorlib::System::String* AssemblyMicrosoft_VisualStudio;
			mscorlib::System::String* AssemblyMicrosoft_VisualStudio_Web;
			mscorlib::System::String* AssemblyMicrosoft_VSDesigner;
			mscorlib::System::String* AssemblyMono_Http;
			mscorlib::System::String* AssemblyMono_Posix;
			mscorlib::System::String* AssemblyMono_Security;
			mscorlib::System::String* AssemblyMono_Messaging_RabbitMQ;
			mscorlib::System::String* AssemblyCorlib;
			mscorlib::System::String* AssemblySystem;
			mscorlib::System::String* AssemblySystem_Data;
			mscorlib::System::String* AssemblySystem_Design;
			mscorlib::System::String* AssemblySystem_DirectoryServices;
			mscorlib::System::String* AssemblySystem_Drawing;
			mscorlib::System::String* AssemblySystem_Drawing_Design;
			mscorlib::System::String* AssemblySystem_Messaging;
			mscorlib::System::String* AssemblySystem_Security;
			mscorlib::System::String* AssemblySystem_ServiceProcess;
			mscorlib::System::String* AssemblySystem_Web;
			mscorlib::System::String* AssemblySystem_Windows_Forms;
			mscorlib::System::String* AssemblySystem_Core;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
	};
}

