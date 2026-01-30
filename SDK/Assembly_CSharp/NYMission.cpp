#include "NYMission.h"

IL2CPP::Il2CppClass* Assembly_CSharp::NYMission::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "", "NYMission");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::NYMission::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::NYMission::_ctor(int32_t id, UnityEngine_CoreModule::UnityEngine::Vector2 _center, UnityEngine_CoreModule::UnityEngine::Color _mainColor, float _size, UnityEngine_AudioModule::UnityEngine::AudioSource* _AS, bool _finish, bool _force_color)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "UnityEngine.Vector2", "UnityEngine.Color", "System.Single", "UnityEngine.AudioSource", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&_center;
	params[2] = (intptr_t)&_mainColor;
	params[3] = (intptr_t)&_size;
	params[4] = (intptr_t)_AS;
	params[5] = (intptr_t)&_finish;
	params[6] = (intptr_t)&_force_color;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::NYMission::DrawMissionPoint(UnityEngine_CoreModule::UnityEngine::Vector2 mpos, bool selected)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawMissionPoint", std::vector<std::string> { "UnityEngine.Vector2", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&mpos;
	params[1] = (intptr_t)&selected;
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
void Assembly_CSharp::NYMission::DropButtonsSize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DropButtonsSize");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
