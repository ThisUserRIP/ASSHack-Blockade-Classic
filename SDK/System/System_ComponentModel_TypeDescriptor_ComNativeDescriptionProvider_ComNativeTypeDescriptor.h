#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_ComponentModel_TypeDescriptor_ComNativeDescriptionProvider.h"
namespace System::System::ComponentModel { struct TypeDescriptor_ComNativeDescriptionProvider; };
namespace System::System::ComponentModel { struct IComNativeDescriptorHandler; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::ComponentModel { struct AttributeCollection; };
namespace mscorlib::System { struct String; };
namespace System::System::ComponentModel { struct TypeConverter; };
namespace System::System::ComponentModel { struct EventDescriptor; };
namespace System::System::ComponentModel { struct PropertyDescriptor; };
namespace System::System::ComponentModel { struct EventDescriptorCollection; };
namespace mscorlib::System { struct Attribute; };
namespace System::System::ComponentModel { struct PropertyDescriptorCollection; };

namespace System::System::ComponentModel
{
	struct TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::ComponentModel::IComNativeDescriptorHandler* _handler;
		mscorlib::System::Object* _instance;
		void _ctor(System::ComponentModel::IComNativeDescriptorHandler* handler, mscorlib::System::Object* instance);
		System::ComponentModel::AttributeCollection* System_ComponentModel_ICustomTypeDescriptor_GetAttributes();
		mscorlib::System::String* System_ComponentModel_ICustomTypeDescriptor_GetClassName();
		mscorlib::System::String* System_ComponentModel_ICustomTypeDescriptor_GetComponentName();
		System::ComponentModel::TypeConverter* System_ComponentModel_ICustomTypeDescriptor_GetConverter();
		System::ComponentModel::EventDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent();
		System::ComponentModel::PropertyDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty();
		mscorlib::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetEditor(mscorlib::System::Type* editorBaseType);
		System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents();
		System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents(IL2CPP::Array<mscorlib::System::Attribute*>* attributes);
		System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties();
		System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties(IL2CPP::Array<mscorlib::System::Attribute*>* attributes);
		mscorlib::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(System::ComponentModel::PropertyDescriptor* pd);
	};
}

