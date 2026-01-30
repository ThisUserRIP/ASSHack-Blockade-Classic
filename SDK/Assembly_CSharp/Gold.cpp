#include "Gold.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Gold::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "", "Gold");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Gold::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Gold::myGlobalInit()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "myGlobalInit");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Gold::OnGUI()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnGUI");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Gold::Update()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Update");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Gold::DoWindow(int32_t windowID)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoWindow", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&windowID;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Gold::DrawBuyButton(int32_t itemID, int32_t offY)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawBuyButton", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&itemID;
	params[1] = (intptr_t)&offY;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Gold::DrawActions()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawActions");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Gold::DrawCoins()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawCoins");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Gold::DrawNovalinkOffers(int32_t dis)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawNovalinkOffers", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&dis;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Gold::DrawMyGamesOffers(int32_t dis)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawMyGamesOffers", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&dis;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Gold::DrawHistory()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawHistory");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Gold::DrawMode(mscorlib::System::String* name, int32_t x, int32_t y, int32_t id)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawMode", std::vector<std::string> { "System.String", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)&y;
	params[3] = (intptr_t)&id;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Gold::DrawLine(float golos, int32_t money, int32_t bonus, int32_t newmoney, int32_t discount, int32_t itemid, int32_t id, Assembly_CSharp::NETWORK network)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawLine", std::vector<std::string> { "System.Single", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "NETWORK" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&golos;
	params[1] = (intptr_t)&money;
	params[2] = (intptr_t)&bonus;
	params[3] = (intptr_t)&newmoney;
	params[4] = (intptr_t)&discount;
	params[5] = (intptr_t)&itemid;
	params[6] = (intptr_t)&id;
	params[7] = (intptr_t)&network;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Gold::DrawHistoryLine(int32_t _pos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawHistoryLine", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&_pos;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::IEnumerator* Assembly_CSharp::Gold::ReInit()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReInit");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IEnumerator*)returnValue;
}
void Assembly_CSharp::Gold::OnPurchaseHistory(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnPurchaseHistory", std::vector<std::string> { "BestHTTP.HTTPRequest", "BestHTTP.HTTPResponse" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)req;
	params[1] = (intptr_t)resp;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Gold::OnSteamBuyItem(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnSteamBuyItem", std::vector<std::string> { "BestHTTP.HTTPRequest", "BestHTTP.HTTPResponse" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)req;
	params[1] = (intptr_t)resp;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Gold::OnSteamBuyItemFinish(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnSteamBuyItemFinish", std::vector<std::string> { "BestHTTP.HTTPRequest", "BestHTTP.HTTPResponse" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)req;
	params[1] = (intptr_t)resp;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Gold::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Gold::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Gold::_DrawBuyButton_b__16_0(Facebook_Unity::Facebook::Unity::IPayResult* response)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<DrawBuyButton>b__16_0", std::vector<std::string> { "Facebook.Unity.IPayResult" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)response;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Gold::_DrawLine_b__24_0(Facebook_Unity::Facebook::Unity::IPayResult* response)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<DrawLine>b__24_0", std::vector<std::string> { "Facebook.Unity.IPayResult" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)response;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
