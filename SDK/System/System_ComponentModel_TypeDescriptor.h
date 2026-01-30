#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::ComponentModel { struct WeakHashtable; };
namespace mscorlib::System::Collections { struct Hashtable; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System::System::Diagnostics { struct BooleanSwitch; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
namespace mscorlib::System { struct Object; };
namespace System::System::ComponentModel { struct RefreshEventHandler; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::ComponentModel { struct IComNativeDescriptorHandler; };
namespace System::System::ComponentModel { struct TypeDescriptionProvider; };
namespace mscorlib::System { struct Attribute; };
namespace System::System::ComponentModel::Design { struct IDesigner; };
namespace System::System::ComponentModel { struct IComponent; };
namespace System::System::ComponentModel { struct EventDescriptor; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct IServiceProvider; };
namespace System::System::ComponentModel { struct PropertyDescriptor; };
namespace System::System::ComponentModel { struct AttributeCollection; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::ComponentModel { struct TypeConverter; };
namespace System::System::ComponentModel { struct EventDescriptorCollection; };
namespace System::System::ComponentModel { struct PropertyDescriptorCollection; };
namespace mscorlib::System::Collections { struct ArrayList; };
namespace mscorlib::System::Collections { struct IList; };
namespace mscorlib::System::Collections { struct IDictionary; };
namespace System::System::ComponentModel { struct ICustomTypeDescriptor; };
namespace System::System::ComponentModel { struct MemberDescriptor; };
namespace System::System::ComponentModel { struct TypeDescriptor_TypeDescriptionNode; };
namespace mscorlib::System::Collections { struct ICollection; };
namespace mscorlib::System::Reflection { struct Module; };
namespace mscorlib::System::Reflection { struct Assembly; };

namespace System::System::ComponentModel
{
	struct TypeDescriptor : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			System::ComponentModel::WeakHashtable* _providerTable;
			mscorlib::System::Collections::Hashtable* _providerTypeTable;
			mscorlib::System::Collections::Hashtable* _defaultProviders;
			System::ComponentModel::WeakHashtable* _associationTable;
			int32_t _metadataVersion;
			int32_t _collisionIndex;
			System::Diagnostics::BooleanSwitch* TraceDescriptor;
			int32_t PIPELINE_ATTRIBUTES;
			int32_t PIPELINE_PROPERTIES;
			int32_t PIPELINE_EVENTS;
			IL2CPP::Array<mscorlib::System::Guid>* _pipelineInitializeKeys;
			IL2CPP::Array<mscorlib::System::Guid>* _pipelineMergeKeys;
			IL2CPP::Array<mscorlib::System::Guid>* _pipelineFilterKeys;
			IL2CPP::Array<mscorlib::System::Guid>* _pipelineAttributeFilterKeys;
			mscorlib::System::Object* _internalSyncObject;
			System::ComponentModel::RefreshEventHandler* Refreshed;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		static System::ComponentModel::IComNativeDescriptorHandler* get_ComNativeDescriptorHandler();
		static void set_ComNativeDescriptorHandler(System::ComponentModel::IComNativeDescriptorHandler* value);
		static mscorlib::System::Type* get_ComObjectType();
		static mscorlib::System::Type* get_InterfaceType();
		static int32_t get_MetadataVersion();
		static void add_Refreshed(System::ComponentModel::RefreshEventHandler* value);
		static void remove_Refreshed(System::ComponentModel::RefreshEventHandler* value);
		static System::ComponentModel::TypeDescriptionProvider* AddAttributes(mscorlib::System::Type* type, IL2CPP::Array<mscorlib::System::Attribute*>* attributes);
		static System::ComponentModel::TypeDescriptionProvider* AddAttributes(mscorlib::System::Object* instance, IL2CPP::Array<mscorlib::System::Attribute*>* attributes);
		static void AddEditorTable(mscorlib::System::Type* editorBaseType, mscorlib::System::Collections::Hashtable* table);
		static void AddProvider(System::ComponentModel::TypeDescriptionProvider* provider, mscorlib::System::Type* type);
		static void AddProvider(System::ComponentModel::TypeDescriptionProvider* provider, mscorlib::System::Object* instance);
		static void AddProviderTransparent(System::ComponentModel::TypeDescriptionProvider* provider, mscorlib::System::Type* type);
		static void AddProviderTransparent(System::ComponentModel::TypeDescriptionProvider* provider, mscorlib::System::Object* instance);
		static void CheckDefaultProvider(mscorlib::System::Type* type);
		static void CreateAssociation(mscorlib::System::Object* primary, mscorlib::System::Object* secondary);
		static System::ComponentModel::Design::IDesigner* CreateDesigner(System::ComponentModel::IComponent* component, mscorlib::System::Type* designerBaseType);
		static System::ComponentModel::EventDescriptor* CreateEvent(mscorlib::System::Type* componentType, mscorlib::System::String* name, mscorlib::System::Type* type, IL2CPP::Array<mscorlib::System::Attribute*>* attributes);
		static System::ComponentModel::EventDescriptor* CreateEvent(mscorlib::System::Type* componentType, System::ComponentModel::EventDescriptor* oldEventDescriptor, IL2CPP::Array<mscorlib::System::Attribute*>* attributes);
		static mscorlib::System::Object* CreateInstance(mscorlib::System::IServiceProvider* provider, mscorlib::System::Type* objectType, IL2CPP::Array<mscorlib::System::Type*>* argTypes, IL2CPP::Array<mscorlib::System::Object*>* args);
		static System::ComponentModel::PropertyDescriptor* CreateProperty(mscorlib::System::Type* componentType, mscorlib::System::String* name, mscorlib::System::Type* type, IL2CPP::Array<mscorlib::System::Attribute*>* attributes);
		static System::ComponentModel::PropertyDescriptor* CreateProperty(mscorlib::System::Type* componentType, System::ComponentModel::PropertyDescriptor* oldPropertyDescriptor, IL2CPP::Array<mscorlib::System::Attribute*>* attributes);
		static void DebugValidate(mscorlib::System::Type* type, System::ComponentModel::AttributeCollection* attributes, System::ComponentModel::AttributeCollection* debugAttributes);
		static void DebugValidate(System::ComponentModel::AttributeCollection* attributes, System::ComponentModel::AttributeCollection* debugAttributes);
		static void DebugValidate(System::ComponentModel::AttributeCollection* attributes, mscorlib::System::Type* type);
		static void DebugValidate(System::ComponentModel::AttributeCollection* attributes, mscorlib::System::Object* instance, bool noCustomTypeDesc);
		static void DebugValidate(System::ComponentModel::TypeConverter* converter, mscorlib::System::Type* type);
		static void DebugValidate(System::ComponentModel::TypeConverter* converter, mscorlib::System::Object* instance, bool noCustomTypeDesc);
		static void DebugValidate(System::ComponentModel::EventDescriptorCollection* events, mscorlib::System::Type* type, IL2CPP::Array<mscorlib::System::Attribute*>* attributes);
		static void DebugValidate(System::ComponentModel::EventDescriptorCollection* events, mscorlib::System::Object* instance, IL2CPP::Array<mscorlib::System::Attribute*>* attributes, bool noCustomTypeDesc);
		static void DebugValidate(System::ComponentModel::PropertyDescriptorCollection* properties, mscorlib::System::Type* type, IL2CPP::Array<mscorlib::System::Attribute*>* attributes);
		static void DebugValidate(System::ComponentModel::PropertyDescriptorCollection* properties, mscorlib::System::Object* instance, IL2CPP::Array<mscorlib::System::Attribute*>* attributes, bool noCustomTypeDesc);
		static mscorlib::System::Collections::ArrayList* FilterMembers(mscorlib::System::Collections::IList* members, IL2CPP::Array<mscorlib::System::Attribute*>* attributes);
		static mscorlib::System::Object* GetAssociation(mscorlib::System::Type* type, mscorlib::System::Object* primary);
		static System::ComponentModel::AttributeCollection* GetAttributes(mscorlib::System::Type* componentType);
		static System::ComponentModel::AttributeCollection* GetAttributes(mscorlib::System::Object* component);
		static System::ComponentModel::AttributeCollection* GetAttributes(mscorlib::System::Object* component, bool noCustomTypeDesc);
		static mscorlib::System::Collections::IDictionary* GetCache(mscorlib::System::Object* instance);
		static mscorlib::System::String* GetClassName(mscorlib::System::Object* component);
		static mscorlib::System::String* GetClassName(mscorlib::System::Object* component, bool noCustomTypeDesc);
		static mscorlib::System::String* GetClassName(mscorlib::System::Type* componentType);
		static mscorlib::System::String* GetComponentName(mscorlib::System::Object* component);
		static mscorlib::System::String* GetComponentName(mscorlib::System::Object* component, bool noCustomTypeDesc);
		static System::ComponentModel::TypeConverter* GetConverter(mscorlib::System::Object* component);
		static System::ComponentModel::TypeConverter* GetConverter(mscorlib::System::Object* component, bool noCustomTypeDesc);
		static System::ComponentModel::TypeConverter* GetConverter(mscorlib::System::Type* type);
		static System::ComponentModel::EventDescriptor* GetDefaultEvent(mscorlib::System::Type* componentType);
		static System::ComponentModel::EventDescriptor* GetDefaultEvent(mscorlib::System::Object* component);
		static System::ComponentModel::EventDescriptor* GetDefaultEvent(mscorlib::System::Object* component, bool noCustomTypeDesc);
		static System::ComponentModel::PropertyDescriptor* GetDefaultProperty(mscorlib::System::Type* componentType);
		static System::ComponentModel::PropertyDescriptor* GetDefaultProperty(mscorlib::System::Object* component);
		static System::ComponentModel::PropertyDescriptor* GetDefaultProperty(mscorlib::System::Object* component, bool noCustomTypeDesc);
		static System::ComponentModel::ICustomTypeDescriptor* GetDescriptor(mscorlib::System::Type* type, mscorlib::System::String* typeName);
		static System::ComponentModel::ICustomTypeDescriptor* GetDescriptor(mscorlib::System::Object* component, bool noCustomTypeDesc);
		static System::ComponentModel::ICustomTypeDescriptor* GetExtendedDescriptor(mscorlib::System::Object* component);
		static mscorlib::System::Object* GetEditor(mscorlib::System::Object* component, mscorlib::System::Type* editorBaseType);
		static mscorlib::System::Object* GetEditor(mscorlib::System::Object* component, mscorlib::System::Type* editorBaseType, bool noCustomTypeDesc);
		static mscorlib::System::Object* GetEditor(mscorlib::System::Type* type, mscorlib::System::Type* editorBaseType);
		static System::ComponentModel::EventDescriptorCollection* GetEvents(mscorlib::System::Type* componentType);
		static System::ComponentModel::EventDescriptorCollection* GetEvents(mscorlib::System::Type* componentType, IL2CPP::Array<mscorlib::System::Attribute*>* attributes);
		static System::ComponentModel::EventDescriptorCollection* GetEvents(mscorlib::System::Object* component);
		static System::ComponentModel::EventDescriptorCollection* GetEvents(mscorlib::System::Object* component, bool noCustomTypeDesc);
		static System::ComponentModel::EventDescriptorCollection* GetEvents(mscorlib::System::Object* component, IL2CPP::Array<mscorlib::System::Attribute*>* attributes);
		static System::ComponentModel::EventDescriptorCollection* GetEvents(mscorlib::System::Object* component, IL2CPP::Array<mscorlib::System::Attribute*>* attributes, bool noCustomTypeDesc);
		static mscorlib::System::String* GetExtenderCollisionSuffix(System::ComponentModel::MemberDescriptor* member);
		static mscorlib::System::String* GetFullComponentName(mscorlib::System::Object* component);
		static mscorlib::System::Type* GetNodeForBaseType(mscorlib::System::Type* searchType);
		static System::ComponentModel::PropertyDescriptorCollection* GetProperties(mscorlib::System::Type* componentType);
		static System::ComponentModel::PropertyDescriptorCollection* GetProperties(mscorlib::System::Type* componentType, IL2CPP::Array<mscorlib::System::Attribute*>* attributes);
		static System::ComponentModel::PropertyDescriptorCollection* GetProperties(mscorlib::System::Object* component);
		static System::ComponentModel::PropertyDescriptorCollection* GetProperties(mscorlib::System::Object* component, bool noCustomTypeDesc);
		static System::ComponentModel::PropertyDescriptorCollection* GetProperties(mscorlib::System::Object* component, IL2CPP::Array<mscorlib::System::Attribute*>* attributes);
		static System::ComponentModel::PropertyDescriptorCollection* GetProperties(mscorlib::System::Object* component, IL2CPP::Array<mscorlib::System::Attribute*>* attributes, bool noCustomTypeDesc);
		static System::ComponentModel::PropertyDescriptorCollection* GetPropertiesImpl(mscorlib::System::Object* component, IL2CPP::Array<mscorlib::System::Attribute*>* attributes, bool noCustomTypeDesc, bool noAttributes);
		static System::ComponentModel::TypeDescriptionProvider* GetProvider(mscorlib::System::Type* type);
		static System::ComponentModel::TypeDescriptionProvider* GetProvider(mscorlib::System::Object* instance);
		static System::ComponentModel::TypeDescriptionProvider* GetProviderRecursive(mscorlib::System::Type* type);
		static mscorlib::System::Type* GetReflectionType(mscorlib::System::Type* type);
		static mscorlib::System::Type* GetReflectionType(mscorlib::System::Object* instance);
		static System::ComponentModel::TypeDescriptor_TypeDescriptionNode* NodeFor(mscorlib::System::Type* type);
		static System::ComponentModel::TypeDescriptor_TypeDescriptionNode* NodeFor(mscorlib::System::Type* type, bool createDelegator);
		static System::ComponentModel::TypeDescriptor_TypeDescriptionNode* NodeFor(mscorlib::System::Object* instance);
		static System::ComponentModel::TypeDescriptor_TypeDescriptionNode* NodeFor(mscorlib::System::Object* instance, bool createDelegator);
		static void NodeRemove(mscorlib::System::Object* key, System::ComponentModel::TypeDescriptionProvider* provider);
		static mscorlib::System::Collections::ICollection* PipelineAttributeFilter(int32_t pipelineType, mscorlib::System::Collections::ICollection* members, IL2CPP::Array<mscorlib::System::Attribute*>* filter, mscorlib::System::Object* instance, mscorlib::System::Collections::IDictionary* cache);
		static mscorlib::System::Collections::ICollection* PipelineFilter(int32_t pipelineType, mscorlib::System::Collections::ICollection* members, mscorlib::System::Object* instance, mscorlib::System::Collections::IDictionary* cache);
		static mscorlib::System::Collections::ICollection* PipelineInitialize(int32_t pipelineType, mscorlib::System::Collections::ICollection* members, mscorlib::System::Collections::IDictionary* cache);
		static mscorlib::System::Collections::ICollection* PipelineMerge(int32_t pipelineType, mscorlib::System::Collections::ICollection* primary, mscorlib::System::Collections::ICollection* secondary, mscorlib::System::Object* instance, mscorlib::System::Collections::IDictionary* cache);
		static void RaiseRefresh(mscorlib::System::Object* component);
		static void RaiseRefresh(mscorlib::System::Type* type);
		static void Refresh(mscorlib::System::Object* component);
		static void Refresh(mscorlib::System::Object* component, bool refreshReflectionProvider);
		static void Refresh(mscorlib::System::Type* type);
		static void Refresh(mscorlib::System::Reflection::Module* module);
		static void Refresh(mscorlib::System::Reflection::Assembly* assembly);
		static void RemoveAssociation(mscorlib::System::Object* primary, mscorlib::System::Object* secondary);
		static void RemoveAssociations(mscorlib::System::Object* primary);
		static void RemoveProvider(System::ComponentModel::TypeDescriptionProvider* provider, mscorlib::System::Type* type);
		static void RemoveProvider(System::ComponentModel::TypeDescriptionProvider* provider, mscorlib::System::Object* instance);
		static void RemoveProviderTransparent(System::ComponentModel::TypeDescriptionProvider* provider, mscorlib::System::Type* type);
		static void RemoveProviderTransparent(System::ComponentModel::TypeDescriptionProvider* provider, mscorlib::System::Object* instance);
		static bool ShouldHideMember(System::ComponentModel::MemberDescriptor* member, mscorlib::System::Attribute* attribute);
		static void SortDescriptorArray(mscorlib::System::Collections::IList* infos);
		static void Trace(mscorlib::System::String* message, IL2CPP::Array<mscorlib::System::Object*>* args);
		static void _cctor();
	};
}

