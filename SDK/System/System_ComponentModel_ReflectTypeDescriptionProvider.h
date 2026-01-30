#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ComponentModel_TypeDescriptionProvider.h"
namespace mscorlib::System::Collections { struct Hashtable; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct IServiceProvider; };
namespace System::System::ComponentModel { struct AttributeCollection; };
namespace mscorlib::System::Collections { struct IDictionary; };
namespace mscorlib::System { struct String; };
namespace System::System::ComponentModel { struct TypeConverter; };
namespace System::System::ComponentModel { struct EventDescriptor; };
namespace System::System::ComponentModel { struct PropertyDescriptor; };
namespace System::System::ComponentModel { struct EventDescriptorCollection; };
namespace System::System::ComponentModel { struct PropertyDescriptorCollection; };
namespace System::System::ComponentModel { struct IExtenderProvider; };
namespace mscorlib::System::Collections { struct ICollection; };
namespace System::System::ComponentModel { struct ICustomTypeDescriptor; };
namespace mscorlib::System::Reflection { struct Module; };
namespace System::System::ComponentModel { struct ReflectTypeDescriptionProvider_ReflectedTypeData; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Attribute; };
namespace mscorlib::System::Reflection { struct MemberInfo; };

namespace System::System::ComponentModel
{
	struct ReflectTypeDescriptionProvider : System::ComponentModel::TypeDescriptionProvider
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Hashtable* _typeData;
		struct StaticFields
		{
			IL2CPP::Array<mscorlib::System::Type*>* _typeConstructor;
			mscorlib::System::Collections::Hashtable* _editorTables;
			mscorlib::System::Collections::Hashtable* _intrinsicTypeConverters;
			mscorlib::System::Object* _intrinsicReferenceKey;
			mscorlib::System::Object* _intrinsicNullableKey;
			mscorlib::System::Object* _dictionaryKey;
			mscorlib::System::Collections::Hashtable* _propertyCache;
			mscorlib::System::Collections::Hashtable* _eventCache;
			mscorlib::System::Collections::Hashtable* _attributeCache;
			mscorlib::System::Collections::Hashtable* _extendedPropertyCache;
			mscorlib::System::Guid _extenderProviderKey;
			mscorlib::System::Guid _extenderPropertiesKey;
			mscorlib::System::Guid _extenderProviderPropertiesKey;
			IL2CPP::Array<mscorlib::System::Type*>* _skipInterfaceAttributeList;
			mscorlib::System::Object* _internalSyncObject;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::Guid get_ExtenderProviderKey();
		void _ctor();
		static mscorlib::System::Collections::Hashtable* get_IntrinsicTypeConverters();
		static void AddEditorTable(mscorlib::System::Type* editorBaseType, mscorlib::System::Collections::Hashtable* table);
		mscorlib::System::Object* CreateInstance(mscorlib::System::IServiceProvider* provider, mscorlib::System::Type* objectType, IL2CPP::Array<mscorlib::System::Type*>* argTypes, IL2CPP::Array<mscorlib::System::Object*>* args);
		static mscorlib::System::Object* CreateInstance(mscorlib::System::Type* objectType, mscorlib::System::Type* callingType);
		System::ComponentModel::AttributeCollection* GetAttributes(mscorlib::System::Type* type);
		mscorlib::System::Collections::IDictionary* GetCache(mscorlib::System::Object* instance);
		mscorlib::System::String* GetClassName(mscorlib::System::Type* type);
		mscorlib::System::String* GetComponentName(mscorlib::System::Type* type, mscorlib::System::Object* instance);
		System::ComponentModel::TypeConverter* GetConverter(mscorlib::System::Type* type, mscorlib::System::Object* instance);
		System::ComponentModel::EventDescriptor* GetDefaultEvent(mscorlib::System::Type* type, mscorlib::System::Object* instance);
		System::ComponentModel::PropertyDescriptor* GetDefaultProperty(mscorlib::System::Type* type, mscorlib::System::Object* instance);
		mscorlib::System::Object* GetEditor(mscorlib::System::Type* type, mscorlib::System::Object* instance, mscorlib::System::Type* editorBaseType);
		static mscorlib::System::Collections::Hashtable* GetEditorTable(mscorlib::System::Type* editorBaseType);
		System::ComponentModel::EventDescriptorCollection* GetEvents(mscorlib::System::Type* type);
		System::ComponentModel::AttributeCollection* GetExtendedAttributes(mscorlib::System::Object* instance);
		mscorlib::System::String* GetExtendedClassName(mscorlib::System::Object* instance);
		mscorlib::System::String* GetExtendedComponentName(mscorlib::System::Object* instance);
		System::ComponentModel::TypeConverter* GetExtendedConverter(mscorlib::System::Object* instance);
		System::ComponentModel::EventDescriptor* GetExtendedDefaultEvent(mscorlib::System::Object* instance);
		System::ComponentModel::PropertyDescriptor* GetExtendedDefaultProperty(mscorlib::System::Object* instance);
		mscorlib::System::Object* GetExtendedEditor(mscorlib::System::Object* instance, mscorlib::System::Type* editorBaseType);
		System::ComponentModel::EventDescriptorCollection* GetExtendedEvents(mscorlib::System::Object* instance);
		System::ComponentModel::PropertyDescriptorCollection* GetExtendedProperties(mscorlib::System::Object* instance);
		IL2CPP::Array<System::ComponentModel::IExtenderProvider*>* GetExtenderProviders(mscorlib::System::Object* instance);
		static IL2CPP::Array<System::ComponentModel::IExtenderProvider*>* GetExtenders(mscorlib::System::Collections::ICollection* components, mscorlib::System::Object* instance, mscorlib::System::Collections::IDictionary* cache);
		mscorlib::System::Object* GetExtendedPropertyOwner(mscorlib::System::Object* instance, System::ComponentModel::PropertyDescriptor* pd);
		System::ComponentModel::ICustomTypeDescriptor* GetExtendedTypeDescriptor(mscorlib::System::Object* instance);
		mscorlib::System::String* GetFullComponentName(mscorlib::System::Object* component);
		IL2CPP::Array<mscorlib::System::Type*>* GetPopulatedTypes(mscorlib::System::Reflection::Module* module);
		System::ComponentModel::PropertyDescriptorCollection* GetProperties(mscorlib::System::Type* type);
		mscorlib::System::Object* GetPropertyOwner(mscorlib::System::Type* type, mscorlib::System::Object* instance, System::ComponentModel::PropertyDescriptor* pd);
		mscorlib::System::Type* GetReflectionType(mscorlib::System::Type* objectType, mscorlib::System::Object* instance);
		System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData* GetTypeData(mscorlib::System::Type* type, bool createIfNeeded);
		System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(mscorlib::System::Type* objectType, mscorlib::System::Object* instance);
		static mscorlib::System::Type* GetTypeFromName(mscorlib::System::String* typeName);
		bool IsPopulated(mscorlib::System::Type* type);
		static IL2CPP::Array<mscorlib::System::Attribute*>* ReflectGetAttributes(mscorlib::System::Type* type);
		static IL2CPP::Array<mscorlib::System::Attribute*>* ReflectGetAttributes(mscorlib::System::Reflection::MemberInfo* member);
		static IL2CPP::Array<System::ComponentModel::EventDescriptor*>* ReflectGetEvents(mscorlib::System::Type* type);
		static IL2CPP::Array<System::ComponentModel::PropertyDescriptor*>* ReflectGetExtendedProperties(System::ComponentModel::IExtenderProvider* provider);
		static IL2CPP::Array<System::ComponentModel::PropertyDescriptor*>* ReflectGetProperties(mscorlib::System::Type* type);
		void Refresh(mscorlib::System::Type* type);
		static mscorlib::System::Object* SearchIntrinsicTable(mscorlib::System::Collections::Hashtable* table, mscorlib::System::Type* callingType);
		static void _cctor();
	};
}

