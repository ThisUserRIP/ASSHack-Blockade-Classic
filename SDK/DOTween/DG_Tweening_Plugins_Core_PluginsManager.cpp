#include "DG_Tweening_Plugins_Core_PluginsManager.h"

IL2CPP::Il2CppClass* DOTween::DG::Tweening::Plugins::Core::PluginsManager::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("DOTween.dll", "DG.Tweening.Plugins.Core", "PluginsManager");
	return il2cppclass;
}
mscorlib::System::Type* DOTween::DG::Tweening::Plugins::Core::PluginsManager::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void DOTween::DG::Tweening::Plugins::Core::PluginsManager::PurgeAll()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PurgeAll");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
