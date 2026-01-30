#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Rewired_Core::Rewired { struct IControllerTemplate; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::Internal
{
	struct ControllerTemplateFactory : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<mscorlib::System::Type*>* _defaultTemplateTypes;
			IL2CPP::Array<mscorlib::System::Type*>* _defaultTemplateInterfaceTypes;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static IL2CPP::Array<mscorlib::System::Type*>* get_templateTypes();
		static IL2CPP::Array<mscorlib::System::Type*>* get_templateInterfaceTypes();
		static Rewired_Core::Rewired::IControllerTemplate* Create(mscorlib::System::Guid typeGuid, mscorlib::System::Object* payload);
		static void _cctor();
	};
}

