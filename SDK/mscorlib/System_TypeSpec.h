#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct TypeIdentifier; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System { struct ModifierSpec; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_TypeSpec_DisplayNameFormat.h"
namespace mscorlib::System::Text { struct StringBuilder; };
namespace mscorlib::System::Reflection { struct AssemblyName; };
namespace mscorlib::System::Reflection { struct Assembly; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
namespace mscorlib::System { template <typename T1, typename T2, typename T3, typename TResult> struct Func_4; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Int32; };
#include "System_Int32.h"

namespace mscorlib::System
{
	struct TypeSpec : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::TypeIdentifier* name;
		mscorlib::System::String* assembly_name;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::TypeIdentifier>* nested;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::TypeSpec>* generic_params;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::ModifierSpec>* modifier_spec;
		bool is_byref;
		mscorlib::System::String* display_fullname;
		bool get_HasModifiers();
		mscorlib::System::String* GetDisplayFullName(mscorlib::System::TypeSpec_DisplayNameFormat flags);
		mscorlib::System::Text::StringBuilder* GetModifierString(mscorlib::System::Text::StringBuilder* sb);
		mscorlib::System::String* get_DisplayFullName();
		static mscorlib::System::TypeSpec* Parse(mscorlib::System::String* typeName);
		static mscorlib::System::String* UnescapeInternalName(mscorlib::System::String* displayName);
		mscorlib::System::Type* Resolve(mscorlib::System::Func_2<mscorlib::System::Reflection::AssemblyName, mscorlib::System::Reflection::Assembly>* assemblyResolver, mscorlib::System::Func_4<mscorlib::System::Reflection::Assembly, mscorlib::System::String, mscorlib::System::Boolean, mscorlib::System::Type>* typeResolver, bool throwOnError, bool ignoreCase);
		void AddName(mscorlib::System::String* type_name);
		void AddModifier(mscorlib::System::ModifierSpec* md);
		static void SkipSpace(mscorlib::System::String* name, int32_t& pos);
		static void BoundCheck(int32_t idx, mscorlib::System::String* s);
		static mscorlib::System::TypeIdentifier* ParsedTypeIdentifier(mscorlib::System::String* displayName);
		static mscorlib::System::TypeSpec* Parse(mscorlib::System::String* name, int32_t& p, bool is_recurse, bool allow_aqn);
		void _ctor();
	};
}

