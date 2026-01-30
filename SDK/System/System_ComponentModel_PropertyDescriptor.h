#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ComponentModel_MemberDescriptor.h"
namespace System::System::ComponentModel { struct TypeConverter; };
namespace mscorlib::System::Collections { struct Hashtable; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Attribute; };
namespace System::System::ComponentModel { struct MemberDescriptor; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_ComponentModel_DesignerSerializationVisibility.h"
namespace mscorlib::System { struct EventHandler; };
namespace mscorlib::System::Collections { struct IList; };
namespace System::System::ComponentModel { struct PropertyDescriptorCollection; };
namespace mscorlib::System { struct EventArgs; };

namespace System::System::ComponentModel
{
	struct PropertyDescriptor : System::ComponentModel::MemberDescriptor
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::ComponentModel::TypeConverter* converter;
		mscorlib::System::Collections::Hashtable* valueChangedHandlers;
		IL2CPP::Array<mscorlib::System::Object*>* editors;
		IL2CPP::Array<mscorlib::System::Type*>* editorTypes;
		int32_t editorCount;
		void _ctor(mscorlib::System::String* name, IL2CPP::Array<mscorlib::System::Attribute*>* attrs);
		void _ctor(System::ComponentModel::MemberDescriptor* descr);
		void _ctor(System::ComponentModel::MemberDescriptor* descr, IL2CPP::Array<mscorlib::System::Attribute*>* attrs);
		mscorlib::System::Type* get_ComponentType();
		System::ComponentModel::TypeConverter* get_Converter();
		bool get_IsLocalizable();
		bool get_IsReadOnly();
		System::ComponentModel::DesignerSerializationVisibility get_SerializationVisibility();
		mscorlib::System::Type* get_PropertyType();
		void AddValueChanged(mscorlib::System::Object* component, mscorlib::System::EventHandler* handler);
		bool CanResetValue(mscorlib::System::Object* component);
		bool Equals(mscorlib::System::Object* obj);
		mscorlib::System::Object* CreateInstance(mscorlib::System::Type* type);
		void FillAttributes(mscorlib::System::Collections::IList* attributeList);
		System::ComponentModel::PropertyDescriptorCollection* GetChildProperties();
		System::ComponentModel::PropertyDescriptorCollection* GetChildProperties(IL2CPP::Array<mscorlib::System::Attribute*>* filter);
		System::ComponentModel::PropertyDescriptorCollection* GetChildProperties(mscorlib::System::Object* instance);
		System::ComponentModel::PropertyDescriptorCollection* GetChildProperties(mscorlib::System::Object* instance, IL2CPP::Array<mscorlib::System::Attribute*>* filter);
		mscorlib::System::Object* GetEditor(mscorlib::System::Type* editorBaseType);
		int32_t GetHashCode();
		mscorlib::System::Object* GetInvocationTarget(mscorlib::System::Type* type, mscorlib::System::Object* instance);
		mscorlib::System::Type* GetTypeFromName(mscorlib::System::String* typeName);
		mscorlib::System::Object* GetValue(mscorlib::System::Object* component);
		void OnValueChanged(mscorlib::System::Object* component, mscorlib::System::EventArgs* e);
		void RemoveValueChanged(mscorlib::System::Object* component, mscorlib::System::EventHandler* handler);
		mscorlib::System::EventHandler* GetValueChangedHandler(mscorlib::System::Object* component);
		void ResetValue(mscorlib::System::Object* component);
		void SetValue(mscorlib::System::Object* component, mscorlib::System::Object* value);
		bool ShouldSerializeValue(mscorlib::System::Object* component);
		bool get_SupportsChangeEvents();
	};
}

