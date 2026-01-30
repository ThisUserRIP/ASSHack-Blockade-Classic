#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::ComponentModel { struct ISite; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System::System::ComponentModel { struct ComponentCollection; };
namespace System::System::ComponentModel { struct ContainerFilterService; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::ComponentModel { struct IComponent; };
namespace mscorlib::System { struct String; };

namespace System::System::ComponentModel
{
	struct Container : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<System::ComponentModel::ISite*>* sites;
		int32_t siteCount;
		System::ComponentModel::ComponentCollection* components;
		System::ComponentModel::ContainerFilterService* filter;
		bool checkedFilter;
		mscorlib::System::Object* syncObj;
		void Finalize();
		void Add(System::ComponentModel::IComponent* component);
		void Add(System::ComponentModel::IComponent* component, mscorlib::System::String* name);
		System::ComponentModel::ISite* CreateSite(System::ComponentModel::IComponent* component, mscorlib::System::String* name);
		void Dispose();
		void Dispose(bool disposing);
		mscorlib::System::Object* GetService(mscorlib::System::Type* service);
		System::ComponentModel::ComponentCollection* get_Components();
		void Remove(System::ComponentModel::IComponent* component);
		void Remove(System::ComponentModel::IComponent* component, bool preserveSite);
		void RemoveWithoutUnsiting(System::ComponentModel::IComponent* component);
		void ValidateName(System::ComponentModel::IComponent* component, mscorlib::System::String* name);
		void _ctor();
	};
}

