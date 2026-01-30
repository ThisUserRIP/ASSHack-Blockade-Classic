#include "System_DefaultBinder.h"

IL2CPP::Il2CppClass* mscorlib::System::DefaultBinder::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System", "DefaultBinder");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::DefaultBinder::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Reflection::MethodBase* mscorlib::System::DefaultBinder::BindToMethod(mscorlib::System::Reflection::BindingFlags bindingAttr, IL2CPP::Array<mscorlib::System::Reflection::MethodBase*>* match, IL2CPP::Array<mscorlib::System::Object*>& args, IL2CPP::Array<mscorlib::System::Reflection::ParameterModifier>* modifiers, mscorlib::System::Globalization::CultureInfo* cultureInfo, IL2CPP::Array<mscorlib::System::String*>* names, mscorlib::System::Object& state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BindToMethod", std::vector<std::string> { "System.Reflection.BindingFlags", "System.Reflection.MethodBase[]", "System.Object[]&", "System.Reflection.ParameterModifier[]", "System.Globalization.CultureInfo", "System.String[]", "System.Object&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&bindingAttr;
	params[1] = (intptr_t)match;
	params[2] = (intptr_t)&args;
	params[3] = (intptr_t)modifiers;
	params[4] = (intptr_t)cultureInfo;
	params[5] = (intptr_t)names;
	params[6] = (intptr_t)&state;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::MethodBase*)returnValue;
}
mscorlib::System::Reflection::FieldInfo* mscorlib::System::DefaultBinder::BindToField(mscorlib::System::Reflection::BindingFlags bindingAttr, IL2CPP::Array<mscorlib::System::Reflection::FieldInfo*>* match, mscorlib::System::Object* value, mscorlib::System::Globalization::CultureInfo* cultureInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BindToField", std::vector<std::string> { "System.Reflection.BindingFlags", "System.Reflection.FieldInfo[]", "System.Object", "System.Globalization.CultureInfo" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&bindingAttr;
	params[1] = (intptr_t)match;
	params[2] = (intptr_t)value;
	params[3] = (intptr_t)cultureInfo;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::FieldInfo*)returnValue;
}
mscorlib::System::Reflection::MethodBase* mscorlib::System::DefaultBinder::SelectMethod(mscorlib::System::Reflection::BindingFlags bindingAttr, IL2CPP::Array<mscorlib::System::Reflection::MethodBase*>* match, IL2CPP::Array<mscorlib::System::Type*>* types, IL2CPP::Array<mscorlib::System::Reflection::ParameterModifier>* modifiers)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SelectMethod", std::vector<std::string> { "System.Reflection.BindingFlags", "System.Reflection.MethodBase[]", "System.Type[]", "System.Reflection.ParameterModifier[]" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&bindingAttr;
	params[1] = (intptr_t)match;
	params[2] = (intptr_t)types;
	params[3] = (intptr_t)modifiers;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::MethodBase*)returnValue;
}
mscorlib::System::Reflection::PropertyInfo* mscorlib::System::DefaultBinder::SelectProperty(mscorlib::System::Reflection::BindingFlags bindingAttr, IL2CPP::Array<mscorlib::System::Reflection::PropertyInfo*>* match, mscorlib::System::Type* returnType, IL2CPP::Array<mscorlib::System::Type*>* indexes, IL2CPP::Array<mscorlib::System::Reflection::ParameterModifier>* modifiers)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SelectProperty", std::vector<std::string> { "System.Reflection.BindingFlags", "System.Reflection.PropertyInfo[]", "System.Type", "System.Type[]", "System.Reflection.ParameterModifier[]" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&bindingAttr;
	params[1] = (intptr_t)match;
	params[2] = (intptr_t)returnType;
	params[3] = (intptr_t)indexes;
	params[4] = (intptr_t)modifiers;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::PropertyInfo*)returnValue;
}
mscorlib::System::Object* mscorlib::System::DefaultBinder::ChangeType(mscorlib::System::Object* value, mscorlib::System::Type* type, mscorlib::System::Globalization::CultureInfo* cultureInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ChangeType", std::vector<std::string> { "System.Object", "System.Type", "System.Globalization.CultureInfo" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)value;
	params[1] = (intptr_t)type;
	params[2] = (intptr_t)cultureInfo;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void mscorlib::System::DefaultBinder::ReorderArgumentArray(IL2CPP::Array<mscorlib::System::Object*>& args, mscorlib::System::Object* state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReorderArgumentArray", std::vector<std::string> { "System.Object[]&", "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&args;
	params[1] = (intptr_t)state;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Reflection::MethodBase* mscorlib::System::DefaultBinder::ExactBinding(IL2CPP::Array<mscorlib::System::Reflection::MethodBase*>* match, IL2CPP::Array<mscorlib::System::Type*>* types, IL2CPP::Array<mscorlib::System::Reflection::ParameterModifier>* modifiers)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExactBinding", std::vector<std::string> { "System.Reflection.MethodBase[]", "System.Type[]", "System.Reflection.ParameterModifier[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)match;
	params[1] = (intptr_t)types;
	params[2] = (intptr_t)modifiers;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::MethodBase*)returnValue;
}
mscorlib::System::Reflection::PropertyInfo* mscorlib::System::DefaultBinder::ExactPropertyBinding(IL2CPP::Array<mscorlib::System::Reflection::PropertyInfo*>* match, mscorlib::System::Type* returnType, IL2CPP::Array<mscorlib::System::Type*>* types, IL2CPP::Array<mscorlib::System::Reflection::ParameterModifier>* modifiers)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExactPropertyBinding", std::vector<std::string> { "System.Reflection.PropertyInfo[]", "System.Type", "System.Type[]", "System.Reflection.ParameterModifier[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)match;
	params[1] = (intptr_t)returnType;
	params[2] = (intptr_t)types;
	params[3] = (intptr_t)modifiers;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::PropertyInfo*)returnValue;
}
int32_t mscorlib::System::DefaultBinder::FindMostSpecific(IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>* p1, IL2CPP::Array<int32_t>* paramOrder1, mscorlib::System::Type* paramArrayType1, IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>* p2, IL2CPP::Array<int32_t>* paramOrder2, mscorlib::System::Type* paramArrayType2, IL2CPP::Array<mscorlib::System::Type*>* types, IL2CPP::Array<mscorlib::System::Object*>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindMostSpecific", std::vector<std::string> { "System.Reflection.ParameterInfo[]", "System.Int32[]", "System.Type", "System.Reflection.ParameterInfo[]", "System.Int32[]", "System.Type", "System.Type[]", "System.Object[]" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)p1;
	params[1] = (intptr_t)paramOrder1;
	params[2] = (intptr_t)paramArrayType1;
	params[3] = (intptr_t)p2;
	params[4] = (intptr_t)paramOrder2;
	params[5] = (intptr_t)paramArrayType2;
	params[6] = (intptr_t)types;
	params[7] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t mscorlib::System::DefaultBinder::FindMostSpecificType(mscorlib::System::Type* c1, mscorlib::System::Type* c2, mscorlib::System::Type* t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindMostSpecificType", std::vector<std::string> { "System.Type", "System.Type", "System.Type" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)c1;
	params[1] = (intptr_t)c2;
	params[2] = (intptr_t)t;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t mscorlib::System::DefaultBinder::FindMostSpecificMethod(mscorlib::System::Reflection::MethodBase* m1, IL2CPP::Array<int32_t>* paramOrder1, mscorlib::System::Type* paramArrayType1, mscorlib::System::Reflection::MethodBase* m2, IL2CPP::Array<int32_t>* paramOrder2, mscorlib::System::Type* paramArrayType2, IL2CPP::Array<mscorlib::System::Type*>* types, IL2CPP::Array<mscorlib::System::Object*>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindMostSpecificMethod", std::vector<std::string> { "System.Reflection.MethodBase", "System.Int32[]", "System.Type", "System.Reflection.MethodBase", "System.Int32[]", "System.Type", "System.Type[]", "System.Object[]" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)m1;
	params[1] = (intptr_t)paramOrder1;
	params[2] = (intptr_t)paramArrayType1;
	params[3] = (intptr_t)m2;
	params[4] = (intptr_t)paramOrder2;
	params[5] = (intptr_t)paramArrayType2;
	params[6] = (intptr_t)types;
	params[7] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t mscorlib::System::DefaultBinder::FindMostSpecificField(mscorlib::System::Reflection::FieldInfo* cur1, mscorlib::System::Reflection::FieldInfo* cur2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindMostSpecificField", std::vector<std::string> { "System.Reflection.FieldInfo", "System.Reflection.FieldInfo" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)cur1;
	params[1] = (intptr_t)cur2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t mscorlib::System::DefaultBinder::FindMostSpecificProperty(mscorlib::System::Reflection::PropertyInfo* cur1, mscorlib::System::Reflection::PropertyInfo* cur2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindMostSpecificProperty", std::vector<std::string> { "System.Reflection.PropertyInfo", "System.Reflection.PropertyInfo" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)cur1;
	params[1] = (intptr_t)cur2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::DefaultBinder::CompareMethodSigAndName(mscorlib::System::Reflection::MethodBase* m1, mscorlib::System::Reflection::MethodBase* m2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompareMethodSigAndName", std::vector<std::string> { "System.Reflection.MethodBase", "System.Reflection.MethodBase" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)m1;
	params[1] = (intptr_t)m2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
int32_t mscorlib::System::DefaultBinder::GetHierarchyDepth(mscorlib::System::Type* t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHierarchyDepth", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)t;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Reflection::MethodBase* mscorlib::System::DefaultBinder::FindMostDerivedNewSlotMeth(IL2CPP::Array<mscorlib::System::Reflection::MethodBase*>* match, int32_t cMatches)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindMostDerivedNewSlotMeth", std::vector<std::string> { "System.Reflection.MethodBase[]", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)match;
	params[1] = (intptr_t)&cMatches;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::MethodBase*)returnValue;
}
void mscorlib::System::DefaultBinder::ReorderParams(IL2CPP::Array<int32_t>* paramOrder, IL2CPP::Array<mscorlib::System::Object*>* vars)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReorderParams", std::vector<std::string> { "System.Int32[]", "System.Object[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)paramOrder;
	params[1] = (intptr_t)vars;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::DefaultBinder::CreateParamOrder(IL2CPP::Array<int32_t>* paramOrder, IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>* pars, IL2CPP::Array<mscorlib::System::String*>* names)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateParamOrder", std::vector<std::string> { "System.Int32[]", "System.Reflection.ParameterInfo[]", "System.String[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)paramOrder;
	params[1] = (intptr_t)pars;
	params[2] = (intptr_t)names;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::DefaultBinder::CanConvertPrimitive(mscorlib::System::RuntimeType* source, mscorlib::System::RuntimeType* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CanConvertPrimitive", std::vector<std::string> { "System.RuntimeType", "System.RuntimeType" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)source;
	params[1] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::DefaultBinder::CanConvertPrimitiveObjectToType(mscorlib::System::Object* source, mscorlib::System::RuntimeType* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CanConvertPrimitiveObjectToType", std::vector<std::string> { "System.Object", "System.RuntimeType" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)source;
	params[1] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::DefaultBinder::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
