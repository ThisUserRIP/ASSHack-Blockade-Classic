#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlBaseConverter.h"
namespace System_Xml::System::Xml::Schema { struct XmlValueConverter; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Schema { struct XmlBaseConverter; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaType; };
namespace mscorlib::System { struct Object; };
namespace System_Xml::System::Xml { struct IXmlNamespaceResolver; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace mscorlib::System::Collections { struct IList; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System::Collections { struct IEnumerable; };
namespace mscorlib::System { struct Exception; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlListConverter : System_Xml::System::Xml::Schema::XmlBaseConverter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::XmlValueConverter* atomicConverter;
		void _ctor(System_Xml::System::Xml::Schema::XmlBaseConverter* atomicConverter);
		void _ctor(System_Xml::System::Xml::Schema::XmlBaseConverter* atomicConverter, mscorlib::System::Type* clrTypeDefault);
		void _ctor(System_Xml::System::Xml::Schema::XmlSchemaType* schemaType);
		static System_Xml::System::Xml::Schema::XmlValueConverter* Create(System_Xml::System::Xml::Schema::XmlValueConverter* atomicConverter);
		mscorlib::System::Object* ChangeType(mscorlib::System::Object* value, mscorlib::System::Type* destinationType, System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver);
		mscorlib::System::Object* ChangeListType(mscorlib::System::Object* value, mscorlib::System::Type* destinationType, System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver);
		bool IsListType(mscorlib::System::Type* type);
		template <typename T> IL2CPP::Array<T>* ToArray(mscorlib::System::Object* list, System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToArray", std::vector<std::string> { "System.Object", "System.Xml.IXmlNamespaceResolver" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)list;
			params[1] = (intptr_t)nsResolver;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (IL2CPP::Array<T>*)returnValue;
		}
		mscorlib::System::Collections::IList* ToList(mscorlib::System::Object* list, System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver);
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* StringAsList(mscorlib::System::String* value);
		mscorlib::System::String* ListAsString(mscorlib::System::Collections::IEnumerable* list, System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver);
		mscorlib::System::Exception* CreateInvalidClrMappingException(mscorlib::System::Type* sourceType, mscorlib::System::Type* destinationType);
	};
}

