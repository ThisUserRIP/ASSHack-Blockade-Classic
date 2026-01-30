#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Reflection { struct Assembly; };
namespace mscorlib::System { struct AttributeUsageAttribute; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Reflection { struct ICustomAttributeProvider; };
namespace mscorlib::System::Reflection { struct CustomAttributeData; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
namespace mscorlib::System::Reflection { struct PropertyInfo; };
namespace mscorlib::System::Reflection { struct MonoProperty; };
namespace mscorlib::System::Reflection { struct EventInfo; };
namespace mscorlib::System::Reflection { struct MonoEvent; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System
{
	struct MonoCustomAttrs : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Reflection::Assembly* corlib;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Type, mscorlib::System::AttributeUsageAttribute>* usage_cache;
			mscorlib::System::AttributeUsageAttribute* DefaultAttributeUsage;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static bool IsUserCattrProvider(mscorlib::System::Object* obj);
		static IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributesInternal(mscorlib::System::Reflection::ICustomAttributeProvider* obj, mscorlib::System::Type* attributeType, bool pseudoAttrs);
		static IL2CPP::Array<mscorlib::System::Object*>* GetPseudoCustomAttributes(mscorlib::System::Reflection::ICustomAttributeProvider* obj, mscorlib::System::Type* attributeType);
		static IL2CPP::Array<mscorlib::System::Object*>* GetPseudoCustomAttributes(mscorlib::System::Type* type);
		static IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributesBase(mscorlib::System::Reflection::ICustomAttributeProvider* obj, mscorlib::System::Type* attributeType, bool inheritedOnly);
		static IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributes(mscorlib::System::Reflection::ICustomAttributeProvider* obj, mscorlib::System::Type* attributeType, bool inherit);
		static IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributes(mscorlib::System::Reflection::ICustomAttributeProvider* obj, bool inherit);
		static IL2CPP::Array<mscorlib::System::Reflection::CustomAttributeData*>* GetCustomAttributesDataInternal(mscorlib::System::Reflection::ICustomAttributeProvider* obj);
		static mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Reflection::CustomAttributeData>* GetCustomAttributesData(mscorlib::System::Reflection::ICustomAttributeProvider* obj);
		static bool IsDefined(mscorlib::System::Reflection::ICustomAttributeProvider* obj, mscorlib::System::Type* attributeType, bool inherit);
		static bool IsDefinedInternal(mscorlib::System::Reflection::ICustomAttributeProvider* obj, mscorlib::System::Type* AttributeType);
		static mscorlib::System::Reflection::PropertyInfo* GetBasePropertyDefinition(mscorlib::System::Reflection::MonoProperty* property);
		static mscorlib::System::Reflection::EventInfo* GetBaseEventDefinition(mscorlib::System::Reflection::MonoEvent* evt);
		static mscorlib::System::Reflection::ICustomAttributeProvider* GetBase(mscorlib::System::Reflection::ICustomAttributeProvider* obj);
		static mscorlib::System::AttributeUsageAttribute* RetrieveAttributeUsageNoCache(mscorlib::System::Type* attributeType);
		static mscorlib::System::AttributeUsageAttribute* RetrieveAttributeUsage(mscorlib::System::Type* attributeType);
		static void _cctor();
	};
}

