#include "Doozy_Engine_UI_Nodes_UINode.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Doozy::Engine::UI::Nodes::UINode::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Doozy.Engine.UI.Nodes", "UINode");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Doozy::Engine::UI::Nodes::UINode::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName>* Assembly_CSharp::Doozy::Engine::UI::Nodes::UINode::get_OnEnterShowViews()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_OnEnterShowViews");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName>*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName>* Assembly_CSharp::Doozy::Engine::UI::Nodes::UINode::get_OnEnterHideViews()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_OnEnterHideViews");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName>*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName>* Assembly_CSharp::Doozy::Engine::UI::Nodes::UINode::get_OnExitShowViews()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_OnExitShowViews");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName>*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName>* Assembly_CSharp::Doozy::Engine::UI::Nodes::UINode::get_OnExitHideViews()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_OnExitHideViews");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName>*)returnValue;
}
float Assembly_CSharp::Doozy::Engine::UI::Nodes::UINode::get_TimerProgress()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TimerProgress");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::Doozy::Engine::UI::Nodes::UINode::CopyNode(Assembly_CSharp::Doozy::Engine::Nody::Models::Node* original)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CopyNode", std::vector<std::string> { "Doozy.Engine.Nody.Models.Node" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)original;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName>* Assembly_CSharp::Doozy::Engine::UI::Nodes::UINode::UIViewCategoryNameListCopy(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName>* original)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UIViewCategoryNameListCopy", std::vector<std::string> { "System.Collections.Generic.List`1<Doozy.Engine.UI.Internal.UIViewCategoryName>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)original;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName>*)returnValue;
}
void Assembly_CSharp::Doozy::Engine::UI::Nodes::UINode::OnCreate()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnCreate");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Nodes::UINode::AddDefaultSockets()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddDefaultSockets");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Nodes::UINode::SortShowViewsList()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SortShowViewsList");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Nodes::UINode::SortHideViewsList()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SortHideViewsList");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName>* Assembly_CSharp::Doozy::Engine::UI::Nodes::UINode::SortViewsList(mscorlib::System::Collections::Generic::IEnumerable_1<Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName>* list)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SortViewsList", std::vector<std::string> { "System.Collections.Generic.IEnumerable`1<Doozy.Engine.UI.Internal.UIViewCategoryName>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)list;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName>*)returnValue;
}
void Assembly_CSharp::Doozy::Engine::UI::Nodes::UINode::AddListeners()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddListeners");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Nodes::UINode::RemoveListeners()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveListeners");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Nodes::UINode::OnButtonMessage(Assembly_CSharp::Doozy::Engine::UI::UIButtonMessage* message)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnButtonMessage", std::vector<std::string> { "Doozy.Engine.UI.UIButtonMessage" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)message;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Nodes::UINode::OnGameEventMessage(Assembly_CSharp::Doozy::Engine::GameEventMessage* message)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnGameEventMessage", std::vector<std::string> { "Doozy.Engine.GameEventMessage" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)message;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Nodes::UINode::LookForTimeDelay()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LookForTimeDelay");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Nodes::UINode::ActivateTimer(float timeDelay, Assembly_CSharp::Doozy::Engine::Nody::Models::Socket* socket)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ActivateTimer", std::vector<std::string> { "System.Single", "Doozy.Engine.Nody.Models.Socket" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&timeDelay;
	params[1] = (intptr_t)socket;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Nodes::UINode::ActivateOutputSocketInputNode(Assembly_CSharp::Doozy::Engine::Nody::Models::Socket* socket)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ActivateOutputSocketInputNode", std::vector<std::string> { "Doozy.Engine.Nody.Models.Socket" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)socket;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Nodes::UINode::Activate(Assembly_CSharp::Doozy::Engine::Nody::Models::Graph* portalGraph)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Activate", std::vector<std::string> { "Doozy.Engine.Nody.Models.Graph" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)portalGraph;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Nodes::UINode::Deactivate()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Deactivate");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Nodes::UINode::OnEnter(Assembly_CSharp::Doozy::Engine::Nody::Models::Node* previousActiveNode, Assembly_CSharp::Doozy::Engine::Nody::Models::Connection* connection)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnEnter", std::vector<std::string> { "Doozy.Engine.Nody.Models.Node", "Doozy.Engine.Nody.Models.Connection" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)previousActiveNode;
	params[1] = (intptr_t)connection;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Nodes::UINode::OnUpdate()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnUpdate");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Nodes::UINode::OnExit(Assembly_CSharp::Doozy::Engine::Nody::Models::Node* nextActiveNode, Assembly_CSharp::Doozy::Engine::Nody::Models::Connection* connection)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnExit", std::vector<std::string> { "Doozy.Engine.Nody.Models.Node", "Doozy.Engine.Nody.Models.Connection" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)nextActiveNode;
	params[1] = (intptr_t)connection;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Nodes::UINode::ShowViews(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName>* views)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShowViews", std::vector<std::string> { "System.Collections.Generic.List`1<Doozy.Engine.UI.Internal.UIViewCategoryName>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)views;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Nodes::UINode::HideViews(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName>* views)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HideViews", std::vector<std::string> { "System.Collections.Generic.List`1<Doozy.Engine.UI.Internal.UIViewCategoryName>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)views;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Nodes::UINode::AddView(Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName* view, Assembly_CSharp::Doozy::Engine::UI::Nodes::UINode_NodeState nodeState, Assembly_CSharp::Doozy::Engine::UI::Nodes::UINode_ViewAction viewAction, bool saveAssets)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddView", std::vector<std::string> { "Doozy.Engine.UI.Internal.UIViewCategoryName", "Doozy.Engine.UI.Nodes.UINode/NodeState", "Doozy.Engine.UI.Nodes.UINode/ViewAction", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)view;
	params[1] = (intptr_t)&nodeState;
	params[2] = (intptr_t)&viewAction;
	params[3] = (intptr_t)&saveAssets;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Nodes::UINode::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
