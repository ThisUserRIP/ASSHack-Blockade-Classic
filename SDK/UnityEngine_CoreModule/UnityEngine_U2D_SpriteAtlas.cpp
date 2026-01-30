#include "UnityEngine_U2D_SpriteAtlas.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::U2D::SpriteAtlas::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.U2D", "SpriteAtlas");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::U2D::SpriteAtlas::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool UnityEngine_CoreModule::UnityEngine::U2D::SpriteAtlas::CanBindTo(UnityEngine_CoreModule::UnityEngine::Sprite* sprite)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CanBindTo", std::vector<std::string> { "UnityEngine.Sprite" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)sprite;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
