#include "DigitalRuby_ThunderAndLightning_LightningBolt_LineRendererMesh.h"

IL2CPP::Il2CppClass* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt_LineRendererMesh::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt::GetIl2CppClass(), "LineRendererMesh");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt_LineRendererMesh::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::GameObject* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt_LineRendererMesh::get_GameObject()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_GameObject");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt_LineRendererMesh::set_GameObject(UnityEngine_CoreModule::UnityEngine::GameObject* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_GameObject", std::vector<std::string> { "UnityEngine.GameObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Material* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt_LineRendererMesh::get_MaterialGlow()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_MaterialGlow");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Material*)returnValue;
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt_LineRendererMesh::set_MaterialGlow(UnityEngine_CoreModule::UnityEngine::Material* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_MaterialGlow", std::vector<std::string> { "UnityEngine.Material" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Material* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt_LineRendererMesh::get_MaterialBolt()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_MaterialBolt");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Material*)returnValue;
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt_LineRendererMesh::set_MaterialBolt(UnityEngine_CoreModule::UnityEngine::Material* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_MaterialBolt", std::vector<std::string> { "UnityEngine.Material" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::MeshRenderer* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt_LineRendererMesh::get_MeshRendererGlow()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_MeshRendererGlow");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::MeshRenderer*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::MeshRenderer* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt_LineRendererMesh::get_MeshRendererBolt()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_MeshRendererBolt");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::MeshRenderer*)returnValue;
}
int32_t Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt_LineRendererMesh::get_Tag()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Tag");
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
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt_LineRendererMesh::set_Tag(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Tag", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Action_1<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformStateInfo>* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt_LineRendererMesh::get_CustomTransform()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_CustomTransform");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Action_1<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformStateInfo>*)returnValue;
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt_LineRendererMesh::set_CustomTransform(mscorlib::System::Action_1<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformStateInfo>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_CustomTransform", std::vector<std::string> { "System.Action`1<DigitalRuby.ThunderAndLightning.LightningCustomTransformStateInfo>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Transform* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt_LineRendererMesh::get_Transform()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Transform");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Transform*)returnValue;
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt_LineRendererMesh::set_Transform(UnityEngine_CoreModule::UnityEngine::Transform* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Transform", std::vector<std::string> { "UnityEngine.Transform" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt_LineRendererMesh::get_Empty()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Empty");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt_LineRendererMesh::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt_LineRendererMesh::PopulateMesh()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PopulateMesh");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt_LineRendererMesh::PrepareForLines(int32_t lineCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrepareForLines", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&lineCount;
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
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt_LineRendererMesh::BeginLine(UnityEngine_CoreModule::UnityEngine::Vector3 start, UnityEngine_CoreModule::UnityEngine::Vector3 end, float radius, UnityEngine_CoreModule::UnityEngine::Color32 color, float colorIntensity, UnityEngine_CoreModule::UnityEngine::Vector4 fadeLifeTime, float glowWidthModifier, float glowIntensity)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginLine", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single", "UnityEngine.Color32", "System.Single", "UnityEngine.Vector4", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&start;
	params[1] = (intptr_t)&end;
	params[2] = (intptr_t)&radius;
	params[3] = (intptr_t)&color;
	params[4] = (intptr_t)&colorIntensity;
	params[5] = (intptr_t)&fadeLifeTime;
	params[6] = (intptr_t)&glowWidthModifier;
	params[7] = (intptr_t)&glowIntensity;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt_LineRendererMesh::AppendLine(UnityEngine_CoreModule::UnityEngine::Vector3 start, UnityEngine_CoreModule::UnityEngine::Vector3 end, float radius, UnityEngine_CoreModule::UnityEngine::Color32 color, float colorIntensity, UnityEngine_CoreModule::UnityEngine::Vector4 fadeLifeTime, float glowWidthModifier, float glowIntensity)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppendLine", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single", "UnityEngine.Color32", "System.Single", "UnityEngine.Vector4", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&start;
	params[1] = (intptr_t)&end;
	params[2] = (intptr_t)&radius;
	params[3] = (intptr_t)&color;
	params[4] = (intptr_t)&colorIntensity;
	params[5] = (intptr_t)&fadeLifeTime;
	params[6] = (intptr_t)&glowWidthModifier;
	params[7] = (intptr_t)&glowIntensity;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt_LineRendererMesh::Reset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt_LineRendererMesh::PopulateMeshInternal()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PopulateMeshInternal");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt_LineRendererMesh::UpdateBounds(UnityEngine_CoreModule::UnityEngine::Vector3& point1, UnityEngine_CoreModule::UnityEngine::Vector3& point2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateBounds", std::vector<std::string> { "UnityEngine.Vector3&", "UnityEngine.Vector3&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&point1;
	params[1] = (intptr_t)&point2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt_LineRendererMesh::AddIndices()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddIndices");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt_LineRendererMesh::AppendLineInternal(UnityEngine_CoreModule::UnityEngine::Vector3& start, UnityEngine_CoreModule::UnityEngine::Vector3& end, UnityEngine_CoreModule::UnityEngine::Vector4& dir, UnityEngine_CoreModule::UnityEngine::Vector4& dirPrev1, UnityEngine_CoreModule::UnityEngine::Vector4& dirPrev2, UnityEngine_CoreModule::UnityEngine::Color32 color, float colorIntensity, UnityEngine_CoreModule::UnityEngine::Vector4& fadeLifeTime, float glowWidthModifier, float glowIntensity)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppendLineInternal", std::vector<std::string> { "UnityEngine.Vector3&", "UnityEngine.Vector3&", "UnityEngine.Vector4&", "UnityEngine.Vector4&", "UnityEngine.Vector4&", "UnityEngine.Color32", "System.Single", "UnityEngine.Vector4&", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[10];
	params[0] = (intptr_t)&start;
	params[1] = (intptr_t)&end;
	params[2] = (intptr_t)&dir;
	params[3] = (intptr_t)&dirPrev1;
	params[4] = (intptr_t)&dirPrev2;
	params[5] = (intptr_t)&color;
	params[6] = (intptr_t)&colorIntensity;
	params[7] = (intptr_t)&fadeLifeTime;
	params[8] = (intptr_t)&glowWidthModifier;
	params[9] = (intptr_t)&glowIntensity;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt_LineRendererMesh::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
