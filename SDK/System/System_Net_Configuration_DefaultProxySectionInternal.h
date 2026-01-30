#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::Net { struct IWebProxy; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Net::Configuration
{
	struct DefaultProxySectionInternal : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Net::IWebProxy* webProxy;
		struct StaticFields
		{
			mscorlib::System::Object* classSyncObject;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static System::Net::IWebProxy* GetDefaultProxy_UsingOldMonoCode();
		static System::Net::IWebProxy* GetSystemWebProxy();
		static mscorlib::System::Object* get_ClassSyncObject();
		static System::Net::Configuration::DefaultProxySectionInternal* GetSection();
		System::Net::IWebProxy* get_WebProxy();
		void _ctor();
	};
}

