#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Reflection_TypeInfo.h"
namespace mscorlib::System::Reflection { struct Assembly; };
namespace mscorlib::System { struct String; };
#include "System_Guid.h"
namespace mscorlib::System { struct Guid; };
namespace mscorlib::System::Reflection { struct Module; };
#include "System_Reflection_TypeAttributes.h"
namespace mscorlib::System::Reflection { struct ConstructorInfo; };
#include "System_Reflection_BindingFlags.h"
namespace mscorlib::System::Reflection { struct Binder; };
#include "System_Reflection_CallingConventions.h"
#include "System_Reflection_ParameterModifier.h"
namespace mscorlib::System::Reflection { struct ParameterModifier; };
namespace mscorlib::System { struct Object; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Reflection { struct EventInfo; };
namespace mscorlib::System::Reflection { struct FieldInfo; };
namespace mscorlib::System::Reflection { struct MethodInfo; };
namespace mscorlib::System::Reflection { struct PropertyInfo; };
namespace mscorlib::System::Globalization { struct CultureInfo; };

namespace mscorlib::System::Reflection::Emit
{
	struct GenericTypeParameterBuilder : mscorlib::System::Reflection::TypeInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Reflection::Assembly* get_Assembly();
		mscorlib::System::String* get_AssemblyQualifiedName();
		mscorlib::System::Type* get_BaseType();
		mscorlib::System::String* get_FullName();
		mscorlib::System::Guid get_GUID();
		mscorlib::System::Reflection::Module* get_Module();
		mscorlib::System::String* get_Name();
		mscorlib::System::String* get_Namespace();
		mscorlib::System::Type* GetElementType();
		mscorlib::System::Type* get_UnderlyingSystemType();
		mscorlib::System::Reflection::TypeAttributes GetAttributeFlagsImpl();
		mscorlib::System::Reflection::ConstructorInfo* GetConstructorImpl(mscorlib::System::Reflection::BindingFlags bindingAttr, mscorlib::System::Reflection::Binder* binder, mscorlib::System::Reflection::CallingConventions callConvention, IL2CPP::Array<mscorlib::System::Type*>* types, IL2CPP::Array<mscorlib::System::Reflection::ParameterModifier>* modifiers);
		IL2CPP::Array<mscorlib::System::Reflection::ConstructorInfo*>* GetConstructors(mscorlib::System::Reflection::BindingFlags bindingAttr);
		IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributes(bool inherit);
		IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributes(mscorlib::System::Type* attributeType, bool inherit);
		mscorlib::System::Reflection::EventInfo* GetEvent(mscorlib::System::String* name, mscorlib::System::Reflection::BindingFlags bindingAttr);
		IL2CPP::Array<mscorlib::System::Reflection::EventInfo*>* GetEvents(mscorlib::System::Reflection::BindingFlags bindingAttr);
		mscorlib::System::Reflection::FieldInfo* GetField(mscorlib::System::String* name, mscorlib::System::Reflection::BindingFlags bindingAttr);
		IL2CPP::Array<mscorlib::System::Reflection::FieldInfo*>* GetFields(mscorlib::System::Reflection::BindingFlags bindingAttr);
		IL2CPP::Array<mscorlib::System::Type*>* GetInterfaces();
		mscorlib::System::Reflection::MethodInfo* GetMethodImpl(mscorlib::System::String* name, mscorlib::System::Reflection::BindingFlags bindingAttr, mscorlib::System::Reflection::Binder* binder, mscorlib::System::Reflection::CallingConventions callConvention, IL2CPP::Array<mscorlib::System::Type*>* types, IL2CPP::Array<mscorlib::System::Reflection::ParameterModifier>* modifiers);
		IL2CPP::Array<mscorlib::System::Reflection::MethodInfo*>* GetMethods(mscorlib::System::Reflection::BindingFlags bindingAttr);
		mscorlib::System::Type* GetNestedType(mscorlib::System::String* name, mscorlib::System::Reflection::BindingFlags bindingAttr);
		IL2CPP::Array<mscorlib::System::Reflection::PropertyInfo*>* GetProperties(mscorlib::System::Reflection::BindingFlags bindingAttr);
		mscorlib::System::Reflection::PropertyInfo* GetPropertyImpl(mscorlib::System::String* name, mscorlib::System::Reflection::BindingFlags bindingAttr, mscorlib::System::Reflection::Binder* binder, mscorlib::System::Type* returnType, IL2CPP::Array<mscorlib::System::Type*>* types, IL2CPP::Array<mscorlib::System::Reflection::ParameterModifier>* modifiers);
		bool HasElementTypeImpl();
		mscorlib::System::Object* InvokeMember(mscorlib::System::String* name, mscorlib::System::Reflection::BindingFlags invokeAttr, mscorlib::System::Reflection::Binder* binder, mscorlib::System::Object* target, IL2CPP::Array<mscorlib::System::Object*>* args, IL2CPP::Array<mscorlib::System::Reflection::ParameterModifier>* modifiers, mscorlib::System::Globalization::CultureInfo* culture, IL2CPP::Array<mscorlib::System::String*>* namedParameters);
		bool IsArrayImpl();
		bool IsByRefImpl();
		bool IsCOMObjectImpl();
		bool IsDefined(mscorlib::System::Type* attributeType, bool inherit);
		bool IsPointerImpl();
		bool IsPrimitiveImpl();
	};
}

