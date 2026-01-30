#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Reflection_MemberInfo.h"
namespace mscorlib::System::Reflection { struct MemberFilter; };
namespace mscorlib::System { struct Object; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct Type; };
namespace mscorlib::System::Reflection { struct Binder; };
#include "System_Reflection_BindingFlags.h"
#include "System_RuntimeTypeHandle.h"
namespace mscorlib::System { struct RuntimeTypeHandle; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Reflection_MemberTypes.h"
namespace mscorlib::System::Reflection { struct MethodBase; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Reflection { struct AssemblyName; };
namespace mscorlib::System::Reflection { struct Assembly; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T1, typename T2, typename T3, typename TResult> struct Func_4; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_TypeCode.h"
#include "System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "System_Reflection_ParameterModifier.h"
namespace mscorlib::System::Reflection { struct ParameterModifier; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
namespace mscorlib::System::Reflection { struct Module; };
namespace mscorlib::System::Reflection { struct ConstructorInfo; };
#include "System_Reflection_CallingConventions.h"
namespace mscorlib::System::Reflection { struct MethodInfo; };
namespace mscorlib::System::Reflection { struct FieldInfo; };
namespace mscorlib::System::Reflection { struct TypeFilter; };
namespace mscorlib::System::Reflection { struct EventInfo; };
namespace mscorlib::System::Reflection { struct PropertyInfo; };
namespace mscorlib::System::Reflection { struct MemberInfo; };
#include "System_Reflection_TypeAttributes.h"
#include "System_Reflection_GenericParameterAttributes.h"
namespace mscorlib::System { struct Array; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };

namespace mscorlib::System
{
	struct Type : mscorlib::System::Reflection::MemberInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::RuntimeTypeHandle _impl;
		struct StaticFields
		{
			mscorlib::System::Reflection::MemberFilter* FilterAttribute;
			mscorlib::System::Reflection::MemberFilter* FilterName;
			mscorlib::System::Reflection::MemberFilter* FilterNameIgnoreCase;
			mscorlib::System::Object* Missing;
			wchar_t Delimiter;
			IL2CPP::Array<mscorlib::System::Type*>* EmptyTypes;
			mscorlib::System::Reflection::Binder* defaultBinder;
			mscorlib::System::Reflection::BindingFlags DefaultLookup;
			mscorlib::System::Reflection::BindingFlags DeclaredOnlyLookup;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		mscorlib::System::Reflection::MemberTypes get_MemberType();
		mscorlib::System::Type* get_DeclaringType();
		mscorlib::System::Reflection::MethodBase* get_DeclaringMethod();
		mscorlib::System::Type* get_ReflectedType();
		static mscorlib::System::Type* GetType(mscorlib::System::String* typeName, mscorlib::System::Func_2<mscorlib::System::Reflection::AssemblyName, mscorlib::System::Reflection::Assembly>* assemblyResolver, mscorlib::System::Func_4<mscorlib::System::Reflection::Assembly, mscorlib::System::String, mscorlib::System::Boolean, mscorlib::System::Type>* typeResolver, bool throwOnError);
		mscorlib::System::Type* MakePointerType();
		mscorlib::System::Type* MakeByRefType();
		mscorlib::System::Type* MakeArrayType();
		mscorlib::System::Type* MakeArrayType(int32_t rank);
		static mscorlib::System::TypeCode GetTypeCode(mscorlib::System::Type* type);
		mscorlib::System::TypeCode GetTypeCodeImpl();
		mscorlib::System::Guid get_GUID();
		static mscorlib::System::Reflection::Binder* get_DefaultBinder();
		static void CreateBinder();
		mscorlib::System::Object* InvokeMember(mscorlib::System::String* name, mscorlib::System::Reflection::BindingFlags invokeAttr, mscorlib::System::Reflection::Binder* binder, mscorlib::System::Object* target, IL2CPP::Array<mscorlib::System::Object*>* args, IL2CPP::Array<mscorlib::System::Reflection::ParameterModifier>* modifiers, mscorlib::System::Globalization::CultureInfo* culture, IL2CPP::Array<mscorlib::System::String*>* namedParameters);
		mscorlib::System::Object* InvokeMember(mscorlib::System::String* name, mscorlib::System::Reflection::BindingFlags invokeAttr, mscorlib::System::Reflection::Binder* binder, mscorlib::System::Object* target, IL2CPP::Array<mscorlib::System::Object*>* args);
		mscorlib::System::Reflection::Module* get_Module();
		mscorlib::System::Reflection::Assembly* get_Assembly();
		mscorlib::System::RuntimeTypeHandle get_TypeHandle();
		static mscorlib::System::RuntimeTypeHandle GetTypeHandle(mscorlib::System::Object* o);
		mscorlib::System::String* get_FullName();
		mscorlib::System::String* get_Namespace();
		mscorlib::System::String* get_AssemblyQualifiedName();
		int32_t GetArrayRank();
		mscorlib::System::Type* get_BaseType();
		mscorlib::System::Reflection::ConstructorInfo* GetConstructor(mscorlib::System::Reflection::BindingFlags bindingAttr, mscorlib::System::Reflection::Binder* binder, mscorlib::System::Reflection::CallingConventions callConvention, IL2CPP::Array<mscorlib::System::Type*>* types, IL2CPP::Array<mscorlib::System::Reflection::ParameterModifier>* modifiers);
		mscorlib::System::Reflection::ConstructorInfo* GetConstructor(mscorlib::System::Reflection::BindingFlags bindingAttr, mscorlib::System::Reflection::Binder* binder, IL2CPP::Array<mscorlib::System::Type*>* types, IL2CPP::Array<mscorlib::System::Reflection::ParameterModifier>* modifiers);
		mscorlib::System::Reflection::ConstructorInfo* GetConstructor(IL2CPP::Array<mscorlib::System::Type*>* types);
		mscorlib::System::Reflection::ConstructorInfo* GetConstructorImpl(mscorlib::System::Reflection::BindingFlags bindingAttr, mscorlib::System::Reflection::Binder* binder, mscorlib::System::Reflection::CallingConventions callConvention, IL2CPP::Array<mscorlib::System::Type*>* types, IL2CPP::Array<mscorlib::System::Reflection::ParameterModifier>* modifiers);
		IL2CPP::Array<mscorlib::System::Reflection::ConstructorInfo*>* GetConstructors(mscorlib::System::Reflection::BindingFlags bindingAttr);
		mscorlib::System::Reflection::MethodInfo* GetMethod(mscorlib::System::String* name, mscorlib::System::Reflection::BindingFlags bindingAttr, mscorlib::System::Reflection::Binder* binder, IL2CPP::Array<mscorlib::System::Type*>* types, IL2CPP::Array<mscorlib::System::Reflection::ParameterModifier>* modifiers);
		mscorlib::System::Reflection::MethodInfo* GetMethod(mscorlib::System::String* name, IL2CPP::Array<mscorlib::System::Type*>* types);
		mscorlib::System::Reflection::MethodInfo* GetMethod(mscorlib::System::String* name, mscorlib::System::Reflection::BindingFlags bindingAttr);
		mscorlib::System::Reflection::MethodInfo* GetMethod(mscorlib::System::String* name);
		mscorlib::System::Reflection::MethodInfo* GetMethodImpl(mscorlib::System::String* name, mscorlib::System::Reflection::BindingFlags bindingAttr, mscorlib::System::Reflection::Binder* binder, mscorlib::System::Reflection::CallingConventions callConvention, IL2CPP::Array<mscorlib::System::Type*>* types, IL2CPP::Array<mscorlib::System::Reflection::ParameterModifier>* modifiers);
		IL2CPP::Array<mscorlib::System::Reflection::MethodInfo*>* GetMethods();
		IL2CPP::Array<mscorlib::System::Reflection::MethodInfo*>* GetMethods(mscorlib::System::Reflection::BindingFlags bindingAttr);
		mscorlib::System::Reflection::FieldInfo* GetField(mscorlib::System::String* name, mscorlib::System::Reflection::BindingFlags bindingAttr);
		mscorlib::System::Reflection::FieldInfo* GetField(mscorlib::System::String* name);
		IL2CPP::Array<mscorlib::System::Reflection::FieldInfo*>* GetFields();
		IL2CPP::Array<mscorlib::System::Reflection::FieldInfo*>* GetFields(mscorlib::System::Reflection::BindingFlags bindingAttr);
		IL2CPP::Array<mscorlib::System::Type*>* GetInterfaces();
		IL2CPP::Array<mscorlib::System::Type*>* FindInterfaces(mscorlib::System::Reflection::TypeFilter* filter, mscorlib::System::Object* filterCriteria);
		mscorlib::System::Reflection::EventInfo* GetEvent(mscorlib::System::String* name);
		mscorlib::System::Reflection::EventInfo* GetEvent(mscorlib::System::String* name, mscorlib::System::Reflection::BindingFlags bindingAttr);
		IL2CPP::Array<mscorlib::System::Reflection::EventInfo*>* GetEvents(mscorlib::System::Reflection::BindingFlags bindingAttr);
		mscorlib::System::Reflection::PropertyInfo* GetProperty(mscorlib::System::String* name, mscorlib::System::Reflection::BindingFlags bindingAttr, mscorlib::System::Reflection::Binder* binder, mscorlib::System::Type* returnType, IL2CPP::Array<mscorlib::System::Type*>* types, IL2CPP::Array<mscorlib::System::Reflection::ParameterModifier>* modifiers);
		mscorlib::System::Reflection::PropertyInfo* GetProperty(mscorlib::System::String* name, mscorlib::System::Reflection::BindingFlags bindingAttr);
		mscorlib::System::Reflection::PropertyInfo* GetProperty(mscorlib::System::String* name, mscorlib::System::Type* returnType, IL2CPP::Array<mscorlib::System::Type*>* types);
		mscorlib::System::Reflection::PropertyInfo* GetProperty(mscorlib::System::String* name, mscorlib::System::Type* returnType);
		mscorlib::System::Reflection::PropertyInfo* GetProperty(mscorlib::System::String* name);
		mscorlib::System::Reflection::PropertyInfo* GetPropertyImpl(mscorlib::System::String* name, mscorlib::System::Reflection::BindingFlags bindingAttr, mscorlib::System::Reflection::Binder* binder, mscorlib::System::Type* returnType, IL2CPP::Array<mscorlib::System::Type*>* types, IL2CPP::Array<mscorlib::System::Reflection::ParameterModifier>* modifiers);
		IL2CPP::Array<mscorlib::System::Reflection::PropertyInfo*>* GetProperties(mscorlib::System::Reflection::BindingFlags bindingAttr);
		IL2CPP::Array<mscorlib::System::Reflection::PropertyInfo*>* GetProperties();
		mscorlib::System::Type* GetNestedType(mscorlib::System::String* name);
		mscorlib::System::Type* GetNestedType(mscorlib::System::String* name, mscorlib::System::Reflection::BindingFlags bindingAttr);
		IL2CPP::Array<mscorlib::System::Reflection::MemberInfo*>* GetMember(mscorlib::System::String* name);
		IL2CPP::Array<mscorlib::System::Reflection::MemberInfo*>* GetMember(mscorlib::System::String* name, mscorlib::System::Reflection::BindingFlags bindingAttr);
		IL2CPP::Array<mscorlib::System::Reflection::MemberInfo*>* GetMember(mscorlib::System::String* name, mscorlib::System::Reflection::MemberTypes type, mscorlib::System::Reflection::BindingFlags bindingAttr);
		bool get_IsNested();
		mscorlib::System::Reflection::TypeAttributes get_Attributes();
		mscorlib::System::Reflection::GenericParameterAttributes get_GenericParameterAttributes();
		bool get_IsVisible();
		bool get_IsNotPublic();
		bool get_IsPublic();
		bool get_IsNestedPublic();
		bool get_IsNestedAssembly();
		bool get_IsExplicitLayout();
		bool get_IsClass();
		bool get_IsInterface();
		bool get_IsValueType();
		bool get_IsAbstract();
		bool get_IsSealed();
		bool get_IsEnum();
		bool get_IsSerializable();
		bool get_IsArray();
		bool get_IsSzArray();
		bool get_IsGenericType();
		bool get_IsGenericTypeDefinition();
		bool get_IsGenericParameter();
		int32_t get_GenericParameterPosition();
		bool get_ContainsGenericParameters();
		IL2CPP::Array<mscorlib::System::Type*>* GetGenericParameterConstraints();
		bool get_IsByRef();
		bool get_IsPointer();
		bool get_IsPrimitive();
		bool get_IsCOMObject();
		bool get_HasElementType();
		bool get_IsContextful();
		bool get_IsMarshalByRef();
		bool IsValueTypeImpl();
		mscorlib::System::Reflection::TypeAttributes GetAttributeFlagsImpl();
		bool IsArrayImpl();
		bool IsByRefImpl();
		bool IsPointerImpl();
		bool IsPrimitiveImpl();
		bool IsCOMObjectImpl();
		mscorlib::System::Type* MakeGenericType(IL2CPP::Array<mscorlib::System::Type*>* typeArguments);
		bool IsContextfulImpl();
		bool IsMarshalByRefImpl();
		mscorlib::System::Type* GetElementType();
		IL2CPP::Array<mscorlib::System::Type*>* GetGenericArguments();
		mscorlib::System::Type* GetGenericTypeDefinition();
		bool HasElementTypeImpl();
		mscorlib::System::Type* GetRootElementType();
		IL2CPP::Array<mscorlib::System::String*>* GetEnumNames();
		mscorlib::System::Array* GetEnumValues();
		mscorlib::System::Array* GetEnumRawConstantValues();
		void GetEnumData(IL2CPP::Array<mscorlib::System::String*>& enumNames, mscorlib::System::Array& enumValues);
		mscorlib::System::Type* GetEnumUnderlyingType();
		bool IsEnumDefined(mscorlib::System::Object* value);
		mscorlib::System::String* GetEnumName(mscorlib::System::Object* value);
		static int32_t BinarySearch(mscorlib::System::Array* array, mscorlib::System::Object* value);
		static bool IsIntegerType(mscorlib::System::Type* t);
		mscorlib::System::Type* get_UnderlyingSystemType();
		bool IsSubclassOf(mscorlib::System::Type* c);
		bool IsInstanceOfType(mscorlib::System::Object* o);
		bool IsAssignableFrom(mscorlib::System::Type* c);
		bool IsEquivalentTo(mscorlib::System::Type* other);
		bool ImplementInterface(mscorlib::System::Type* ifaceType);
		mscorlib::System::String* FormatTypeName();
		mscorlib::System::String* FormatTypeName(bool serialization);
		mscorlib::System::String* ToString();
		bool Equals(mscorlib::System::Object* o);
		bool Equals(mscorlib::System::Type* o);
		static bool op_Equality(mscorlib::System::Type* left, mscorlib::System::Type* right);
		static bool op_Inequality(mscorlib::System::Type* left, mscorlib::System::Type* right);
		int32_t GetHashCode();
		mscorlib::System::Type* GetType();
		static mscorlib::System::Type* internal_from_name(mscorlib::System::String* name, bool throwOnError, bool ignoreCase);
		static mscorlib::System::Type* GetType(mscorlib::System::String* typeName);
		static mscorlib::System::Type* GetType(mscorlib::System::String* typeName, bool throwOnError);
		static mscorlib::System::Type* GetType(mscorlib::System::String* typeName, bool throwOnError, bool ignoreCase);
		static mscorlib::System::Type* GetTypeFromHandle(mscorlib::System::RuntimeTypeHandle handle);
		static mscorlib::System::Type* internal_from_handle(intptr_t handle);
		static void _cctor();
	};
	bool operator==(mscorlib::System::Type& left, mscorlib::System::Type& right);
	bool operator!=(mscorlib::System::Type& left, mscorlib::System::Type& right);
}

