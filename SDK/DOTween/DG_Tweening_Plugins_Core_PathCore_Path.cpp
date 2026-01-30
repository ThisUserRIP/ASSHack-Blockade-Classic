#include "DG_Tweening_Plugins_Core_PathCore_Path.h"

IL2CPP::Il2CppClass* DOTween::DG::Tweening::Plugins::Core::PathCore::Path::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("DOTween.dll", "DG.Tweening.Plugins.Core.PathCore", "Path");
	return il2cppclass;
}
mscorlib::System::Type* DOTween::DG::Tweening::Plugins::Core::PathCore::Path::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void DOTween::DG::Tweening::Plugins::Core::PathCore::Path::_ctor(DOTween::DG::Tweening::PathType type, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* waypoints, int32_t subdivisionsXSegment, mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Color> gizmoColor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "DG.Tweening.PathType", "UnityEngine.Vector3[]", "System.Int32", "System.Nullable`1<UnityEngine.Color>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&type;
	params[1] = (intptr_t)waypoints;
	params[2] = (intptr_t)&subdivisionsXSegment;
	params[3] = (intptr_t)&gizmoColor;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::Plugins::Core::PathCore::Path::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::Plugins::Core::PathCore::Path::FinalizePath(bool isClosedPath, DOTween::DG::Tweening::AxisConstraint lockPositionAxes, UnityEngine_CoreModule::UnityEngine::Vector3 currTargetVal)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FinalizePath", std::vector<std::string> { "System.Boolean", "DG.Tweening.AxisConstraint", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&isClosedPath;
	params[1] = (intptr_t)&lockPositionAxes;
	params[2] = (intptr_t)&currTargetVal;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector3 DOTween::DG::Tweening::Plugins::Core::PathCore::Path::GetPoint(float perc, bool convertToConstantPerc)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPoint", std::vector<std::string> { "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&perc;
	params[1] = (intptr_t)&convertToConstantPerc;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
float DOTween::DG::Tweening::Plugins::Core::PathCore::Path::ConvertToConstantPathPerc(float perc)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConvertToConstantPathPerc", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&perc;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
int32_t DOTween::DG::Tweening::Plugins::Core::PathCore::Path::GetWaypointIndexFromPerc(float perc, bool isMovingForward)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetWaypointIndexFromPerc", std::vector<std::string> { "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&perc;
	params[1] = (intptr_t)&isMovingForward;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* DOTween::DG::Tweening::Plugins::Core::PathCore::Path::GetDrawPoints(DOTween::DG::Tweening::Plugins::Core::PathCore::Path* p, int32_t drawSubdivisionsXSegment)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDrawPoints", std::vector<std::string> { "DG.Tweening.Plugins.Core.PathCore.Path", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)p;
	params[1] = (intptr_t)&drawSubdivisionsXSegment;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>*)returnValue;
}
void DOTween::DG::Tweening::Plugins::Core::PathCore::Path::RefreshNonLinearDrawWps(DOTween::DG::Tweening::Plugins::Core::PathCore::Path* p)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RefreshNonLinearDrawWps", std::vector<std::string> { "DG.Tweening.Plugins.Core.PathCore.Path" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)p;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::Plugins::Core::PathCore::Path::Destroy()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Destroy");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
DOTween::DG::Tweening::Plugins::Core::PathCore::Path* DOTween::DG::Tweening::Plugins::Core::PathCore::Path::CloneIncremental(int32_t loopIncrement)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CloneIncremental", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&loopIncrement;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Plugins::Core::PathCore::Path*)returnValue;
}
void DOTween::DG::Tweening::Plugins::Core::PathCore::Path::AssignWaypoints(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* newWps, bool cloneWps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AssignWaypoints", std::vector<std::string> { "UnityEngine.Vector3[]", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)newWps;
	params[1] = (intptr_t)&cloneWps;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::Plugins::Core::PathCore::Path::AssignDecoder(DOTween::DG::Tweening::PathType pathType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AssignDecoder", std::vector<std::string> { "DG.Tweening.PathType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&pathType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::Plugins::Core::PathCore::Path::Draw()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Draw");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::Plugins::Core::PathCore::Path::Draw(DOTween::DG::Tweening::Plugins::Core::PathCore::Path* p)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Draw", std::vector<std::string> { "DG.Tweening.Plugins.Core.PathCore.Path" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)p;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
