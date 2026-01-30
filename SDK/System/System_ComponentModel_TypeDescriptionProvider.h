#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::ComponentModel { struct TypeDescriptionProvider_EmptyCustomTypeDescriptor; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct IServiceProvider; };
namespace mscorlib::System::Collections { struct IDictionary; };
namespace System::System::ComponentModel { struct ICustomTypeDescriptor; };
namespace System::System::ComponentModel { struct IExtenderProvider; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System::System::ComponentModel
{
	struct TypeDescriptionProvider : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::ComponentModel::TypeDescriptionProvider* _parent;
		System::ComponentModel::TypeDescriptionProvider_EmptyCustomTypeDescriptor* _emptyDescriptor;
		void _ctor();
		void _ctor(System::ComponentModel::TypeDescriptionProvider* parent);
		mscorlib::System::Object* CreateInstance(mscorlib::System::IServiceProvider* provider, mscorlib::System::Type* objectType, IL2CPP::Array<mscorlib::System::Type*>* argTypes, IL2CPP::Array<mscorlib::System::Object*>* args);
		mscorlib::System::Collections::IDictionary* GetCache(mscorlib::System::Object* instance);
		System::ComponentModel::ICustomTypeDescriptor* GetExtendedTypeDescriptor(mscorlib::System::Object* instance);
		IL2CPP::Array<System::ComponentModel::IExtenderProvider*>* GetExtenderProviders(mscorlib::System::Object* instance);
		mscorlib::System::String* GetFullComponentName(mscorlib::System::Object* component);
		mscorlib::System::Type* GetReflectionType(mscorlib::System::Type* objectType);
		mscorlib::System::Type* GetReflectionType(mscorlib::System::Object* instance);
		mscorlib::System::Type* GetReflectionType(mscorlib::System::Type* objectType, mscorlib::System::Object* instance);
		mscorlib::System::Type* GetRuntimeType(mscorlib::System::Type* reflectionType);
		System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(mscorlib::System::Type* objectType);
		System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(mscorlib::System::Object* instance);
		System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(mscorlib::System::Type* objectType, mscorlib::System::Object* instance);
		bool IsSupportedType(mscorlib::System::Type* type);
	};
}

