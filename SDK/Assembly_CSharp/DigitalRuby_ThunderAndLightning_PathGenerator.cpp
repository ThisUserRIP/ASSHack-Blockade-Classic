#include "DigitalRuby_ThunderAndLightning_PathGenerator.h"

IL2CPP::Il2CppClass* Assembly_CSharp::DigitalRuby::ThunderAndLightning::PathGenerator::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "DigitalRuby.ThunderAndLightning", "PathGenerator");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::DigitalRuby::ThunderAndLightning::PathGenerator::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
float Assembly_CSharp::DigitalRuby::ThunderAndLightning::PathGenerator::SquareRoot(float x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SquareRoot", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
float Assembly_CSharp::DigitalRuby::ThunderAndLightning::PathGenerator::Distance2D(UnityEngine_CoreModule::UnityEngine::Vector3& point1, UnityEngine_CoreModule::UnityEngine::Vector3& point2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Distance2D", std::vector<std::string> { "UnityEngine.Vector3&", "UnityEngine.Vector3&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&point1;
	params[1] = (intptr_t)&point2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
float Assembly_CSharp::DigitalRuby::ThunderAndLightning::PathGenerator::Distance3D(UnityEngine_CoreModule::UnityEngine::Vector3& point1, UnityEngine_CoreModule::UnityEngine::Vector3& point2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Distance3D", std::vector<std::string> { "UnityEngine.Vector3&", "UnityEngine.Vector3&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&point1;
	params[1] = (intptr_t)&point2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::PathGenerator::GetCurvePoint2D(UnityEngine_CoreModule::UnityEngine::Vector3& start, UnityEngine_CoreModule::UnityEngine::Vector3& end, UnityEngine_CoreModule::UnityEngine::Vector3& ctr1, UnityEngine_CoreModule::UnityEngine::Vector3& ctr2, float t, UnityEngine_CoreModule::UnityEngine::Vector3& point)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCurvePoint2D", std::vector<std::string> { "UnityEngine.Vector3&", "UnityEngine.Vector3&", "UnityEngine.Vector3&", "UnityEngine.Vector3&", "System.Single", "UnityEngine.Vector3&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&start;
	params[1] = (intptr_t)&end;
	params[2] = (intptr_t)&ctr1;
	params[3] = (intptr_t)&ctr2;
	params[4] = (intptr_t)&t;
	params[5] = (intptr_t)&point;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::PathGenerator::GetCurvePoint3D(UnityEngine_CoreModule::UnityEngine::Vector3& start, UnityEngine_CoreModule::UnityEngine::Vector3& end, UnityEngine_CoreModule::UnityEngine::Vector3& ctr1, UnityEngine_CoreModule::UnityEngine::Vector3& ctr2, float t, UnityEngine_CoreModule::UnityEngine::Vector3& point)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCurvePoint3D", std::vector<std::string> { "UnityEngine.Vector3&", "UnityEngine.Vector3&", "UnityEngine.Vector3&", "UnityEngine.Vector3&", "System.Single", "UnityEngine.Vector3&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&start;
	params[1] = (intptr_t)&end;
	params[2] = (intptr_t)&ctr1;
	params[3] = (intptr_t)&ctr2;
	params[4] = (intptr_t)&t;
	params[5] = (intptr_t)&point;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::PathGenerator::CalculateNonuniformCatmullRom(float p1, float p2, float p3, float p4, float distance1, float distance2, float distance3, UnityEngine_CoreModule::UnityEngine::Vector4& point)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CalculateNonuniformCatmullRom", std::vector<std::string> { "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "UnityEngine.Vector4&" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&p1;
	params[1] = (intptr_t)&p2;
	params[2] = (intptr_t)&p3;
	params[3] = (intptr_t)&p4;
	params[4] = (intptr_t)&distance1;
	params[5] = (intptr_t)&distance2;
	params[6] = (intptr_t)&distance3;
	params[7] = (intptr_t)&point;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float Assembly_CSharp::DigitalRuby::ThunderAndLightning::PathGenerator::CalculatePolynomial(UnityEngine_CoreModule::UnityEngine::Vector4& point, float t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CalculatePolynomial", std::vector<std::string> { "UnityEngine.Vector4&", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&point;
	params[1] = (intptr_t)&t;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::PathGenerator::ClampSplineDistances(float& distance1, float& distance2, float& distance3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClampSplineDistances", std::vector<std::string> { "System.Single&", "System.Single&", "System.Single&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&distance1;
	params[1] = (intptr_t)&distance2;
	params[2] = (intptr_t)&distance3;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::PathGenerator::GetSplinePoint2D(UnityEngine_CoreModule::UnityEngine::Vector3& point1, UnityEngine_CoreModule::UnityEngine::Vector3& point2, UnityEngine_CoreModule::UnityEngine::Vector3& point3, UnityEngine_CoreModule::UnityEngine::Vector3& point4, float t, UnityEngine_CoreModule::UnityEngine::Vector3& point)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSplinePoint2D", std::vector<std::string> { "UnityEngine.Vector3&", "UnityEngine.Vector3&", "UnityEngine.Vector3&", "UnityEngine.Vector3&", "System.Single", "UnityEngine.Vector3&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&point1;
	params[1] = (intptr_t)&point2;
	params[2] = (intptr_t)&point3;
	params[3] = (intptr_t)&point4;
	params[4] = (intptr_t)&t;
	params[5] = (intptr_t)&point;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::PathGenerator::GetSplinePoint3D(UnityEngine_CoreModule::UnityEngine::Vector3& point1, UnityEngine_CoreModule::UnityEngine::Vector3& point2, UnityEngine_CoreModule::UnityEngine::Vector3& point3, UnityEngine_CoreModule::UnityEngine::Vector3& point4, float t, UnityEngine_CoreModule::UnityEngine::Vector3& point)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSplinePoint3D", std::vector<std::string> { "UnityEngine.Vector3&", "UnityEngine.Vector3&", "UnityEngine.Vector3&", "UnityEngine.Vector3&", "System.Single", "UnityEngine.Vector3&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&point1;
	params[1] = (intptr_t)&point2;
	params[2] = (intptr_t)&point3;
	params[3] = (intptr_t)&point4;
	params[4] = (intptr_t)&t;
	params[5] = (intptr_t)&point;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float Assembly_CSharp::DigitalRuby::ThunderAndLightning::PathGenerator::CreateCurve(mscorlib::System::Collections::Generic::ICollection_1<UnityEngine_CoreModule::UnityEngine::Vector3>* path, UnityEngine_CoreModule::UnityEngine::Vector3 start, UnityEngine_CoreModule::UnityEngine::Vector3 end, UnityEngine_CoreModule::UnityEngine::Vector3 ctr1, UnityEngine_CoreModule::UnityEngine::Vector3 ctr2, int32_t numberOfSegments, float startT)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateCurve", std::vector<std::string> { "System.Collections.Generic.ICollection`1<UnityEngine.Vector3>", "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Int32", "System.Single" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&end;
	params[3] = (intptr_t)&ctr1;
	params[4] = (intptr_t)&ctr2;
	params[5] = (intptr_t)&numberOfSegments;
	params[6] = (intptr_t)&startT;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool Assembly_CSharp::DigitalRuby::ThunderAndLightning::PathGenerator::CreateSpline(mscorlib::System::Collections::Generic::ICollection_1<UnityEngine_CoreModule::UnityEngine::Vector3>* path, mscorlib::System::Collections::Generic::IList_1<UnityEngine_CoreModule::UnityEngine::Vector3>* points, int32_t numberOfSegments, bool closePath)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateSpline", std::vector<std::string> { "System.Collections.Generic.ICollection`1<UnityEngine.Vector3>", "System.Collections.Generic.IList`1<UnityEngine.Vector3>", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)points;
	params[2] = (intptr_t)&numberOfSegments;
	params[3] = (intptr_t)&closePath;
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
bool Assembly_CSharp::DigitalRuby::ThunderAndLightning::PathGenerator::CreateSplineWithSegmentDistance(mscorlib::System::Collections::Generic::ICollection_1<UnityEngine_CoreModule::UnityEngine::Vector3>* path, mscorlib::System::Collections::Generic::IList_1<UnityEngine_CoreModule::UnityEngine::Vector3>* points, float distancePerSegment, bool closePath)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateSplineWithSegmentDistance", std::vector<std::string> { "System.Collections.Generic.ICollection`1<UnityEngine.Vector3>", "System.Collections.Generic.IList`1<UnityEngine.Vector3>", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)points;
	params[2] = (intptr_t)&distancePerSegment;
	params[3] = (intptr_t)&closePath;
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
