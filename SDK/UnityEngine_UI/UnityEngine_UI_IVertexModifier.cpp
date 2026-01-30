#include "UnityEngine_UI_IVertexModifier.h"

IL2CPP::Il2CppClass* UnityEngine_UI::UnityEngine::UI::IVertexModifier::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UI.dll", "UnityEngine.UI", "IVertexModifier");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UI::UnityEngine::UI::IVertexModifier::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_UI::UnityEngine::UI::IVertexModifier::ModifyVertices(mscorlib::System::Collections::Generic::List_1<UnityEngine_TextRenderingModule::UnityEngine::UIVertex>* verts)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ModifyVertices", std::vector<std::string> { "System.Collections.Generic.List`1<UnityEngine.UIVertex>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)verts;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
