#include "Rewired_InputSources_SDL2_SDL2InputSource_YlFuFBiPLhXJGGSQyEthujUOavya.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource_YlFuFBiPLhXJGGSQyEthujUOavya::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::GetIl2CppClass(), "YlFuFBiPLhXJGGSQyEthujUOavya");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource_YlFuFBiPLhXJGGSQyEthujUOavya::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource_YlFuFBiPLhXJGGSQyEthujUOavya::_ctor(mscorlib::System::Object* object, intptr_t method)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Object", "System.IntPtr" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)object;
	params[1] = (intptr_t)&method;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource_YlFuFBiPLhXJGGSQyEthujUOavya::Invoke(int32_t gameControllerId, uint8_t rewiredElementType, uint8_t sdlElementType, int16_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invoke", std::vector<std::string> { "System.Int32", "System.Byte", "System.Byte", "System.Int16" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&gameControllerId;
	params[1] = (intptr_t)&rewiredElementType;
	params[2] = (intptr_t)&sdlElementType;
	params[3] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::IAsyncResult* Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource_YlFuFBiPLhXJGGSQyEthujUOavya::BeginInvoke(int32_t gameControllerId, uint8_t rewiredElementType, uint8_t sdlElementType, int16_t value, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginInvoke", std::vector<std::string> { "System.Int32", "System.Byte", "System.Byte", "System.Int16", "System.AsyncCallback", "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&gameControllerId;
	params[1] = (intptr_t)&rewiredElementType;
	params[2] = (intptr_t)&sdlElementType;
	params[3] = (intptr_t)&value;
	params[4] = (intptr_t)callback;
	params[5] = (intptr_t)object;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IAsyncResult*)returnValue;
}
void Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource_YlFuFBiPLhXJGGSQyEthujUOavya::EndInvoke(mscorlib::System::IAsyncResult* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndInvoke", std::vector<std::string> { "System.IAsyncResult" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)result;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
