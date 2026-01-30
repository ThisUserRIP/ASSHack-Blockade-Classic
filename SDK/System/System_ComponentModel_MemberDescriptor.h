#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System::System::ComponentModel { struct AttributeCollection; };
namespace mscorlib::System { struct Attribute; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IList; };
namespace mscorlib::System::Reflection { struct MethodInfo; };
namespace System::System::ComponentModel { struct ISite; };

namespace System::System::ComponentModel
{
	struct MemberDescriptor : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* name;
		mscorlib::System::String* displayName;
		int32_t nameHash;
		System::ComponentModel::AttributeCollection* attributeCollection;
		IL2CPP::Array<mscorlib::System::Attribute*>* attributes;
		IL2CPP::Array<mscorlib::System::Attribute*>* originalAttributes;
		bool attributesFiltered;
		bool attributesFilled;
		int32_t metadataVersion;
		mscorlib::System::String* category;
		mscorlib::System::String* description;
		mscorlib::System::Object* lockCookie;
		void _ctor(mscorlib::System::String* name);
		void _ctor(mscorlib::System::String* name, IL2CPP::Array<mscorlib::System::Attribute*>* attributes);
		void _ctor(System::ComponentModel::MemberDescriptor* descr);
		void _ctor(System::ComponentModel::MemberDescriptor* oldMemberDescriptor, IL2CPP::Array<mscorlib::System::Attribute*>* newAttributes);
		IL2CPP::Array<mscorlib::System::Attribute*>* get_AttributeArray();
		void set_AttributeArray(IL2CPP::Array<mscorlib::System::Attribute*>* value);
		System::ComponentModel::AttributeCollection* get_Attributes();
		mscorlib::System::String* get_Category();
		mscorlib::System::String* get_Description();
		bool get_IsBrowsable();
		mscorlib::System::String* get_Name();
		int32_t get_NameHashCode();
		bool get_DesignTimeOnly();
		mscorlib::System::String* get_DisplayName();
		void CheckAttributesValid();
		System::ComponentModel::AttributeCollection* CreateAttributeCollection();
		bool Equals(mscorlib::System::Object* obj);
		void FillAttributes(mscorlib::System::Collections::IList* attributeList);
		void FilterAttributesIfNeeded();
		static mscorlib::System::Reflection::MethodInfo* FindMethod(mscorlib::System::Type* componentClass, mscorlib::System::String* name, IL2CPP::Array<mscorlib::System::Type*>* args, mscorlib::System::Type* returnType);
		static mscorlib::System::Reflection::MethodInfo* FindMethod(mscorlib::System::Type* componentClass, mscorlib::System::String* name, IL2CPP::Array<mscorlib::System::Type*>* args, mscorlib::System::Type* returnType, bool publicOnly);
		int32_t GetHashCode();
		mscorlib::System::Object* GetInvocationTarget(mscorlib::System::Type* type, mscorlib::System::Object* instance);
		static System::ComponentModel::ISite* GetSite(mscorlib::System::Object* component);
		static mscorlib::System::Object* GetInvokee(mscorlib::System::Type* componentClass, mscorlib::System::Object* component);
	};
}

