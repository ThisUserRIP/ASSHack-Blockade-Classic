#include "PlatformSupport_Collections_Specialized_NotifyCollectionChangedEventArgs.h"

IL2CPP::Il2CppClass* Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventArgs::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "PlatformSupport.Collections.Specialized", "NotifyCollectionChangedEventArgs");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventArgs::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventArgs::_ctor(Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction action)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "PlatformSupport.Collections.Specialized.NotifyCollectionChangedAction" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&action;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventArgs::_ctor(Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction action, mscorlib::System::Object* changedItem)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "PlatformSupport.Collections.Specialized.NotifyCollectionChangedAction", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&action;
	params[1] = (intptr_t)changedItem;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventArgs::_ctor(Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction action, mscorlib::System::Object* changedItem, int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "PlatformSupport.Collections.Specialized.NotifyCollectionChangedAction", "System.Object", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&action;
	params[1] = (intptr_t)changedItem;
	params[2] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventArgs::_ctor(Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction action, mscorlib::System::Collections::IList* changedItems)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "PlatformSupport.Collections.Specialized.NotifyCollectionChangedAction", "System.Collections.IList" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&action;
	params[1] = (intptr_t)changedItems;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventArgs::_ctor(Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction action, mscorlib::System::Collections::IList* changedItems, int32_t startingIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "PlatformSupport.Collections.Specialized.NotifyCollectionChangedAction", "System.Collections.IList", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&action;
	params[1] = (intptr_t)changedItems;
	params[2] = (intptr_t)&startingIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventArgs::_ctor(Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction action, mscorlib::System::Object* newItem, mscorlib::System::Object* oldItem)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "PlatformSupport.Collections.Specialized.NotifyCollectionChangedAction", "System.Object", "System.Object" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&action;
	params[1] = (intptr_t)newItem;
	params[2] = (intptr_t)oldItem;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventArgs::_ctor(Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction action, mscorlib::System::Object* newItem, mscorlib::System::Object* oldItem, int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "PlatformSupport.Collections.Specialized.NotifyCollectionChangedAction", "System.Object", "System.Object", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&action;
	params[1] = (intptr_t)newItem;
	params[2] = (intptr_t)oldItem;
	params[3] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventArgs::_ctor(Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction action, mscorlib::System::Collections::IList* newItems, mscorlib::System::Collections::IList* oldItems)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "PlatformSupport.Collections.Specialized.NotifyCollectionChangedAction", "System.Collections.IList", "System.Collections.IList" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&action;
	params[1] = (intptr_t)newItems;
	params[2] = (intptr_t)oldItems;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventArgs::_ctor(Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction action, mscorlib::System::Collections::IList* newItems, mscorlib::System::Collections::IList* oldItems, int32_t startingIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "PlatformSupport.Collections.Specialized.NotifyCollectionChangedAction", "System.Collections.IList", "System.Collections.IList", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&action;
	params[1] = (intptr_t)newItems;
	params[2] = (intptr_t)oldItems;
	params[3] = (intptr_t)&startingIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventArgs::_ctor(Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction action, mscorlib::System::Object* changedItem, int32_t index, int32_t oldIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "PlatformSupport.Collections.Specialized.NotifyCollectionChangedAction", "System.Object", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&action;
	params[1] = (intptr_t)changedItem;
	params[2] = (intptr_t)&index;
	params[3] = (intptr_t)&oldIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventArgs::_ctor(Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction action, mscorlib::System::Collections::IList* changedItems, int32_t index, int32_t oldIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "PlatformSupport.Collections.Specialized.NotifyCollectionChangedAction", "System.Collections.IList", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&action;
	params[1] = (intptr_t)changedItems;
	params[2] = (intptr_t)&index;
	params[3] = (intptr_t)&oldIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventArgs::_ctor(Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction action, mscorlib::System::Collections::IList* newItems, mscorlib::System::Collections::IList* oldItems, int32_t newIndex, int32_t oldIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "PlatformSupport.Collections.Specialized.NotifyCollectionChangedAction", "System.Collections.IList", "System.Collections.IList", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&action;
	params[1] = (intptr_t)newItems;
	params[2] = (intptr_t)oldItems;
	params[3] = (intptr_t)&newIndex;
	params[4] = (intptr_t)&oldIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventArgs::InitializeAddOrRemove(Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction action, mscorlib::System::Collections::IList* changedItems, int32_t startingIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitializeAddOrRemove", std::vector<std::string> { "PlatformSupport.Collections.Specialized.NotifyCollectionChangedAction", "System.Collections.IList", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&action;
	params[1] = (intptr_t)changedItems;
	params[2] = (intptr_t)&startingIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventArgs::InitializeAdd(Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction action, mscorlib::System::Collections::IList* newItems, int32_t newStartingIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitializeAdd", std::vector<std::string> { "PlatformSupport.Collections.Specialized.NotifyCollectionChangedAction", "System.Collections.IList", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&action;
	params[1] = (intptr_t)newItems;
	params[2] = (intptr_t)&newStartingIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventArgs::InitializeRemove(Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction action, mscorlib::System::Collections::IList* oldItems, int32_t oldStartingIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitializeRemove", std::vector<std::string> { "PlatformSupport.Collections.Specialized.NotifyCollectionChangedAction", "System.Collections.IList", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&action;
	params[1] = (intptr_t)oldItems;
	params[2] = (intptr_t)&oldStartingIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventArgs::InitializeMoveOrReplace(Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction action, mscorlib::System::Collections::IList* newItems, mscorlib::System::Collections::IList* oldItems, int32_t startingIndex, int32_t oldStartingIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitializeMoveOrReplace", std::vector<std::string> { "PlatformSupport.Collections.Specialized.NotifyCollectionChangedAction", "System.Collections.IList", "System.Collections.IList", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&action;
	params[1] = (intptr_t)newItems;
	params[2] = (intptr_t)oldItems;
	params[3] = (intptr_t)&startingIndex;
	params[4] = (intptr_t)&oldStartingIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventArgs::get_Action()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Action");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction));
		return ret;
	}
	return static_cast<Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction>(*(Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Collections::IList* Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventArgs::get_NewItems()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_NewItems");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IList*)returnValue;
}
mscorlib::System::Collections::IList* Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventArgs::get_OldItems()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_OldItems");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IList*)returnValue;
}
int32_t Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventArgs::get_NewStartingIndex()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_NewStartingIndex");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventArgs::get_OldStartingIndex()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_OldStartingIndex");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
