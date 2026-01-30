#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Reflection { struct MethodBase; };
#include "System_Reflection_BindingFlags.h"
namespace mscorlib::System { struct Object; };
#include "System_Reflection_ParameterModifier.h"
namespace mscorlib::System::Reflection { struct ParameterModifier; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Reflection { struct FieldInfo; };
namespace mscorlib::System::Reflection { struct PropertyInfo; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Reflection
{
	struct Binder : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Reflection::MethodBase* BindToMethod(mscorlib::System::Reflection::BindingFlags bindingAttr, IL2CPP::Array<mscorlib::System::Reflection::MethodBase*>* match, IL2CPP::Array<mscorlib::System::Object*>& args, IL2CPP::Array<mscorlib::System::Reflection::ParameterModifier>* modifiers, mscorlib::System::Globalization::CultureInfo* culture, IL2CPP::Array<mscorlib::System::String*>* names, mscorlib::System::Object& state);
		mscorlib::System::Reflection::FieldInfo* BindToField(mscorlib::System::Reflection::BindingFlags bindingAttr, IL2CPP::Array<mscorlib::System::Reflection::FieldInfo*>* match, mscorlib::System::Object* value, mscorlib::System::Globalization::CultureInfo* culture);
		mscorlib::System::Reflection::MethodBase* SelectMethod(mscorlib::System::Reflection::BindingFlags bindingAttr, IL2CPP::Array<mscorlib::System::Reflection::MethodBase*>* match, IL2CPP::Array<mscorlib::System::Type*>* types, IL2CPP::Array<mscorlib::System::Reflection::ParameterModifier>* modifiers);
		mscorlib::System::Reflection::PropertyInfo* SelectProperty(mscorlib::System::Reflection::BindingFlags bindingAttr, IL2CPP::Array<mscorlib::System::Reflection::PropertyInfo*>* match, mscorlib::System::Type* returnType, IL2CPP::Array<mscorlib::System::Type*>* indexes, IL2CPP::Array<mscorlib::System::Reflection::ParameterModifier>* modifiers);
		mscorlib::System::Object* ChangeType(mscorlib::System::Object* value, mscorlib::System::Type* type, mscorlib::System::Globalization::CultureInfo* culture);
		void ReorderArgumentArray(IL2CPP::Array<mscorlib::System::Object*>& args, mscorlib::System::Object* state);
		void _ctor();
	};
}

