#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Reflection { struct FieldInfo; };
namespace mscorlib::System::Reflection { struct MethodInfo; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace Assembly_CSharp
{
	struct vp_Event : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* m_Name;
		mscorlib::System::Type* m_Type;
		mscorlib::System::Type* m_ArgumentType;
		mscorlib::System::Type* m_ReturnType;
		IL2CPP::Array<mscorlib::System::Reflection::FieldInfo*>* m_Fields;
		IL2CPP::Array<mscorlib::System::Type*>* m_DelegateTypes;
		IL2CPP::Array<mscorlib::System::Reflection::MethodInfo*>* m_DefaultMethods;
		IL2CPP::Array<mscorlib::System::String*>* InvokerFieldNames;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Int32>* Prefixes;
		mscorlib::System::String* get_EventName();
		mscorlib::System::Type* get_Type();
		mscorlib::System::Type* get_ArgumentType();
		mscorlib::System::Type* get_ReturnType();
		void Register(mscorlib::System::Object* target, mscorlib::System::String* method, int32_t variant);
		void Unregister(mscorlib::System::Object* target);
		void InitFields();
		void _ctor(mscorlib::System::String* name);
		void StoreInvokerFieldNames();
		mscorlib::System::Type* MakeGenericType(mscorlib::System::Type* type);
		void SetFieldToExternalMethod(mscorlib::System::Object* target, mscorlib::System::Reflection::FieldInfo* field, mscorlib::System::String* method, mscorlib::System::Type* type);
		void AddExternalMethodToField(mscorlib::System::Object* target, mscorlib::System::Reflection::FieldInfo* field, mscorlib::System::String* method, mscorlib::System::Type* type);
		void SetFieldToLocalMethod(mscorlib::System::Reflection::FieldInfo* field, mscorlib::System::Reflection::MethodInfo* method, mscorlib::System::Type* type);
		void RemoveExternalMethodFromField(mscorlib::System::Object* target, mscorlib::System::Reflection::FieldInfo* field);
		mscorlib::System::Reflection::MethodInfo* GetStaticGenericMethod(mscorlib::System::Type* e, mscorlib::System::String* name, mscorlib::System::Type* parameterType, mscorlib::System::Type* returnType);
		mscorlib::System::Type* get_GetArgumentType();
		mscorlib::System::Type* get_GetGenericReturnType();
		mscorlib::System::Type* GetParameterType(int32_t index);
		mscorlib::System::Type* GetReturnType(int32_t index);
		void Refresh();
	};
}

