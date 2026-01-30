#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_ComponentModel_ReflectTypeDescriptionProvider.h"
namespace System::System::ComponentModel { struct ReflectTypeDescriptionProvider; };
namespace System::System::ComponentModel { struct AttributeCollection; };
namespace System::System::ComponentModel { struct EventDescriptorCollection; };
namespace System::System::ComponentModel { struct PropertyDescriptorCollection; };
namespace System::System::ComponentModel { struct TypeConverter; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace System::System::ComponentModel { struct EventDescriptor; };
namespace System::System::ComponentModel { struct PropertyDescriptor; };
namespace System::System::ComponentModel { struct EditorAttribute; };

namespace System::System::ComponentModel
{
	struct ReflectTypeDescriptionProvider_ReflectedTypeData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Type* _type;
		System::ComponentModel::AttributeCollection* _attributes;
		System::ComponentModel::EventDescriptorCollection* _events;
		System::ComponentModel::PropertyDescriptorCollection* _properties;
		System::ComponentModel::TypeConverter* _converter;
		IL2CPP::Array<mscorlib::System::Object*>* _editors;
		IL2CPP::Array<mscorlib::System::Type*>* _editorTypes;
		int32_t _editorCount;
		void _ctor(mscorlib::System::Type* type);
		bool get_IsPopulated();
		System::ComponentModel::AttributeCollection* GetAttributes();
		mscorlib::System::String* GetClassName(mscorlib::System::Object* instance);
		mscorlib::System::String* GetComponentName(mscorlib::System::Object* instance);
		System::ComponentModel::TypeConverter* GetConverter(mscorlib::System::Object* instance);
		System::ComponentModel::EventDescriptor* GetDefaultEvent(mscorlib::System::Object* instance);
		System::ComponentModel::PropertyDescriptor* GetDefaultProperty(mscorlib::System::Object* instance);
		mscorlib::System::Object* GetEditor(mscorlib::System::Object* instance, mscorlib::System::Type* editorBaseType);
		static System::ComponentModel::EditorAttribute* GetEditorAttribute(System::ComponentModel::AttributeCollection* attributes, mscorlib::System::Type* editorBaseType);
		System::ComponentModel::EventDescriptorCollection* GetEvents();
		System::ComponentModel::PropertyDescriptorCollection* GetProperties();
		mscorlib::System::Type* GetTypeFromName(mscorlib::System::String* typeName);
		void Refresh();
	};
}

