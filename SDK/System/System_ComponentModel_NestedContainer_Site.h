#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_ComponentModel_NestedContainer.h"
namespace System::System::ComponentModel { struct NestedContainer; };
namespace System::System::ComponentModel { struct IComponent; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::ComponentModel { struct IContainer; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System::System::ComponentModel
{
	struct NestedContainer_Site : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::ComponentModel::IComponent* component;
		System::ComponentModel::NestedContainer* container;
		mscorlib::System::String* name;
		void _ctor(System::ComponentModel::IComponent* component, System::ComponentModel::NestedContainer* container, mscorlib::System::String* name);
		System::ComponentModel::IComponent* get_Component();
		System::ComponentModel::IContainer* get_Container();
		mscorlib::System::Object* GetService(mscorlib::System::Type* service);
		bool get_DesignMode();
		mscorlib::System::String* get_FullName();
		mscorlib::System::String* get_Name();
		void set_Name(mscorlib::System::String* value);
	};
}

