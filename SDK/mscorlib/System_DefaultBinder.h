#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Reflection_Binder.h"
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
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Reflection { struct ParameterInfo; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct RuntimeType; };

namespace mscorlib::System
{
	struct DefaultBinder : mscorlib::System::Reflection::Binder
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Reflection::MethodBase* BindToMethod(mscorlib::System::Reflection::BindingFlags bindingAttr, IL2CPP::Array<mscorlib::System::Reflection::MethodBase*>* match, IL2CPP::Array<mscorlib::System::Object*>& args, IL2CPP::Array<mscorlib::System::Reflection::ParameterModifier>* modifiers, mscorlib::System::Globalization::CultureInfo* cultureInfo, IL2CPP::Array<mscorlib::System::String*>* names, mscorlib::System::Object& state);
		mscorlib::System::Reflection::FieldInfo* BindToField(mscorlib::System::Reflection::BindingFlags bindingAttr, IL2CPP::Array<mscorlib::System::Reflection::FieldInfo*>* match, mscorlib::System::Object* value, mscorlib::System::Globalization::CultureInfo* cultureInfo);
		mscorlib::System::Reflection::MethodBase* SelectMethod(mscorlib::System::Reflection::BindingFlags bindingAttr, IL2CPP::Array<mscorlib::System::Reflection::MethodBase*>* match, IL2CPP::Array<mscorlib::System::Type*>* types, IL2CPP::Array<mscorlib::System::Reflection::ParameterModifier>* modifiers);
		mscorlib::System::Reflection::PropertyInfo* SelectProperty(mscorlib::System::Reflection::BindingFlags bindingAttr, IL2CPP::Array<mscorlib::System::Reflection::PropertyInfo*>* match, mscorlib::System::Type* returnType, IL2CPP::Array<mscorlib::System::Type*>* indexes, IL2CPP::Array<mscorlib::System::Reflection::ParameterModifier>* modifiers);
		mscorlib::System::Object* ChangeType(mscorlib::System::Object* value, mscorlib::System::Type* type, mscorlib::System::Globalization::CultureInfo* cultureInfo);
		void ReorderArgumentArray(IL2CPP::Array<mscorlib::System::Object*>& args, mscorlib::System::Object* state);
		static mscorlib::System::Reflection::MethodBase* ExactBinding(IL2CPP::Array<mscorlib::System::Reflection::MethodBase*>* match, IL2CPP::Array<mscorlib::System::Type*>* types, IL2CPP::Array<mscorlib::System::Reflection::ParameterModifier>* modifiers);
		static mscorlib::System::Reflection::PropertyInfo* ExactPropertyBinding(IL2CPP::Array<mscorlib::System::Reflection::PropertyInfo*>* match, mscorlib::System::Type* returnType, IL2CPP::Array<mscorlib::System::Type*>* types, IL2CPP::Array<mscorlib::System::Reflection::ParameterModifier>* modifiers);
		static int32_t FindMostSpecific(IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>* p1, IL2CPP::Array<int32_t>* paramOrder1, mscorlib::System::Type* paramArrayType1, IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>* p2, IL2CPP::Array<int32_t>* paramOrder2, mscorlib::System::Type* paramArrayType2, IL2CPP::Array<mscorlib::System::Type*>* types, IL2CPP::Array<mscorlib::System::Object*>* args);
		static int32_t FindMostSpecificType(mscorlib::System::Type* c1, mscorlib::System::Type* c2, mscorlib::System::Type* t);
		static int32_t FindMostSpecificMethod(mscorlib::System::Reflection::MethodBase* m1, IL2CPP::Array<int32_t>* paramOrder1, mscorlib::System::Type* paramArrayType1, mscorlib::System::Reflection::MethodBase* m2, IL2CPP::Array<int32_t>* paramOrder2, mscorlib::System::Type* paramArrayType2, IL2CPP::Array<mscorlib::System::Type*>* types, IL2CPP::Array<mscorlib::System::Object*>* args);
		static int32_t FindMostSpecificField(mscorlib::System::Reflection::FieldInfo* cur1, mscorlib::System::Reflection::FieldInfo* cur2);
		static int32_t FindMostSpecificProperty(mscorlib::System::Reflection::PropertyInfo* cur1, mscorlib::System::Reflection::PropertyInfo* cur2);
		static bool CompareMethodSigAndName(mscorlib::System::Reflection::MethodBase* m1, mscorlib::System::Reflection::MethodBase* m2);
		static int32_t GetHierarchyDepth(mscorlib::System::Type* t);
		static mscorlib::System::Reflection::MethodBase* FindMostDerivedNewSlotMeth(IL2CPP::Array<mscorlib::System::Reflection::MethodBase*>* match, int32_t cMatches);
		static void ReorderParams(IL2CPP::Array<int32_t>* paramOrder, IL2CPP::Array<mscorlib::System::Object*>* vars);
		static bool CreateParamOrder(IL2CPP::Array<int32_t>* paramOrder, IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>* pars, IL2CPP::Array<mscorlib::System::String*>* names);
		static bool CanConvertPrimitive(mscorlib::System::RuntimeType* source, mscorlib::System::RuntimeType* target);
		static bool CanConvertPrimitiveObjectToType(mscorlib::System::Object* source, mscorlib::System::RuntimeType* type);
		void _ctor();
	};
}

