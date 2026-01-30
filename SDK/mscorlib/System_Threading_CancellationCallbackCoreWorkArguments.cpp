#include "System_Threading_CancellationCallbackCoreWorkArguments.h"

IL2CPP::Il2CppClass* mscorlib::System::Threading::CancellationCallbackCoreWorkArguments::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Threading", "CancellationCallbackCoreWorkArguments");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Threading::CancellationCallbackCoreWorkArguments::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Threading::CancellationCallbackCoreWorkArguments::_ctor(mscorlib::System::Threading::SparselyPopulatedArrayFragment_1<mscorlib::System::Threading::CancellationCallbackInfo>* currArrayFragment, int32_t currArrayIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)currArrayFragment;
	params[1] = (intptr_t)&currArrayIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
