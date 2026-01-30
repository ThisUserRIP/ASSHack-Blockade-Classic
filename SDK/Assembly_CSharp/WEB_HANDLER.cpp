#include "WEB_HANDLER.h"

IL2CPP::Il2CppClass* Assembly_CSharp::WEB_HANDLER::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "", "WEB_HANDLER");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::WEB_HANDLER::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::WEB_HANDLER::START_GAME(Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "START_GAME", std::vector<std::string> { "BestHTTP.OnRequestFinishedDelegate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)_callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::WEB_HANDLER::AUTH(Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AUTH", std::vector<std::string> { "BestHTTP.OnRequestFinishedDelegate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)_callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::WEB_HANDLER::CHECK_NEW_LVL_BONUS(Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CHECK_NEW_LVL_BONUS", std::vector<std::string> { "BestHTTP.OnRequestFinishedDelegate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)_callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::WEB_HANDLER::CHECK_TOURNAMENT_REWARD(Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CHECK_TOURNAMENT_REWARD", std::vector<std::string> { "BestHTTP.OnRequestFinishedDelegate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)_callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::WEB_HANDLER::CHECK_WALL_POST(mscorlib::System::String* _post_id, Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback, bool _isDailyPost)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CHECK_WALL_POST", std::vector<std::string> { "System.String", "BestHTTP.OnRequestFinishedDelegate", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)_post_id;
	params[1] = (intptr_t)_callback;
	params[2] = (intptr_t)&_isDailyPost;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::WEB_HANDLER::GET_MISSIONS(Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GET_MISSIONS", std::vector<std::string> { "BestHTTP.OnRequestFinishedDelegate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)_callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::WEB_HANDLER::GET_DAILY_TOURNAMENT_INFO(Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GET_DAILY_TOURNAMENT_INFO", std::vector<std::string> { "BestHTTP.OnRequestFinishedDelegate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)_callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::WEB_HANDLER::GET_WEEKLY_TOURNAMENT_INFO(Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GET_WEEKLY_TOURNAMENT_INFO", std::vector<std::string> { "BestHTTP.OnRequestFinishedDelegate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)_callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::WEB_HANDLER::GET_MY_TOURNAMENTS_HISTORY(Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GET_MY_TOURNAMENTS_HISTORY", std::vector<std::string> { "BestHTTP.OnRequestFinishedDelegate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)_callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::WEB_HANDLER::BUY_SEASON_LVLS(int32_t levels_count, Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BUY_SEASON_LVLS", std::vector<std::string> { "System.Int32", "BestHTTP.OnRequestFinishedDelegate" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&levels_count;
	params[1] = (intptr_t)_callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::WEB_HANDLER::CHECK_SEASON_REWARDS(Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CHECK_SEASON_REWARDS", std::vector<std::string> { "BestHTTP.OnRequestFinishedDelegate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)_callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::WEB_HANDLER::CHANGE_NICKNAME(mscorlib::System::String* newName, Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CHANGE_NICKNAME", std::vector<std::string> { "System.String", "BestHTTP.OnRequestFinishedDelegate" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)newName;
	params[1] = (intptr_t)_callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::WEB_HANDLER::REFRESH_SERVERS_LIST(Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "REFRESH_SERVERS_LIST", std::vector<std::string> { "BestHTTP.OnRequestFinishedDelegate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)_callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::WEB_HANDLER::GET_FAST_SERVER(mscorlib::System::String* filters, Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GET_FAST_SERVER", std::vector<std::string> { "System.String", "BestHTTP.OnRequestFinishedDelegate" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)filters;
	params[1] = (intptr_t)_callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::WEB_HANDLER::GET_USER_ITEMS(Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GET_USER_ITEMS", std::vector<std::string> { "BestHTTP.OnRequestFinishedDelegate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)_callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::WEB_HANDLER::CHECK_BONUSES(Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CHECK_BONUSES", std::vector<std::string> { "BestHTTP.OnRequestFinishedDelegate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)_callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::WEB_HANDLER::GET_MY_LVL_BONUS(Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GET_MY_LVL_BONUS", std::vector<std::string> { "BestHTTP.OnRequestFinishedDelegate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)_callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::WEB_HANDLER::BUY_ITEM(int32_t ITEM_ID, Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BUY_ITEM", std::vector<std::string> { "System.Int32", "BestHTTP.OnRequestFinishedDelegate" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ITEM_ID;
	params[1] = (intptr_t)_callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::WEB_HANDLER::RELOAD_INVENTORY(Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RELOAD_INVENTORY", std::vector<std::string> { "BestHTTP.OnRequestFinishedDelegate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)_callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::WEB_HANDLER::SET_SKIN(int32_t SKIN_ID, Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SET_SKIN", std::vector<std::string> { "System.Int32", "BestHTTP.OnRequestFinishedDelegate" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&SKIN_ID;
	params[1] = (intptr_t)_callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::WEB_HANDLER::CHECK_USER_TICKET(Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CHECK_USER_TICKET", std::vector<std::string> { "BestHTTP.OnRequestFinishedDelegate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)_callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::WEB_HANDLER::STEAM_BUY_ITEM(uint64_t ITEM_ID, int32_t REQ, Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "STEAM_BUY_ITEM", std::vector<std::string> { "System.UInt64", "System.Int32", "BestHTTP.OnRequestFinishedDelegate" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&ITEM_ID;
	params[1] = (intptr_t)&REQ;
	params[2] = (intptr_t)_callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::WEB_HANDLER::MY_BUY_ITEM(uint64_t ITEM_ID, int32_t REQ, Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MY_BUY_ITEM", std::vector<std::string> { "System.UInt64", "System.Int32", "BestHTTP.OnRequestFinishedDelegate" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&ITEM_ID;
	params[1] = (intptr_t)&REQ;
	params[2] = (intptr_t)_callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::WEB_HANDLER::GET_PURCHASE_HISTORY(bool INCLUDE_CANCELED, Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GET_PURCHASE_HISTORY", std::vector<std::string> { "System.Boolean", "BestHTTP.OnRequestFinishedDelegate" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&INCLUDE_CANCELED;
	params[1] = (intptr_t)_callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::WEB_HANDLER::GET_STATISTIC_TOP(int32_t page, mscorlib::System::String* search, int32_t mode, Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GET_STATISTIC_TOP", std::vector<std::string> { "System.Int32", "System.String", "System.Int32", "BestHTTP.OnRequestFinishedDelegate" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&page;
	params[1] = (intptr_t)search;
	params[2] = (intptr_t)&mode;
	params[3] = (intptr_t)_callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::WEB_HANDLER::GET_ANGAR_GAMESCORE(int32_t gameId, int32_t page, Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GET_ANGAR_GAMESCORE", std::vector<std::string> { "System.Int32", "System.Int32", "BestHTTP.OnRequestFinishedDelegate" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&gameId;
	params[1] = (intptr_t)&page;
	params[2] = (intptr_t)_callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::WEB_HANDLER::SET_ANGAR_GAMESCORE(int32_t gameId, int32_t score, Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SET_ANGAR_GAMESCORE", std::vector<std::string> { "System.Int32", "System.Int32", "BestHTTP.OnRequestFinishedDelegate" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&gameId;
	params[1] = (intptr_t)&score;
	params[2] = (intptr_t)_callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::WEB_HANDLER::GET_ANGAR_GAMELIVES(int32_t gameId, Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GET_ANGAR_GAMELIVES", std::vector<std::string> { "System.Int32", "BestHTTP.OnRequestFinishedDelegate" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&gameId;
	params[1] = (intptr_t)_callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::WEB_HANDLER::SET_ANGAR_GAMELIVE(int32_t gameId, int32_t live, Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SET_ANGAR_GAMELIVE", std::vector<std::string> { "System.Int32", "System.Int32", "BestHTTP.OnRequestFinishedDelegate" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&gameId;
	params[1] = (intptr_t)&live;
	params[2] = (intptr_t)_callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Assembly_CSharp::WEB_HANDLER::CHECK_ERROR(mscorlib::System::String* errMsg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CHECK_ERROR", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)errMsg;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
System::System::Uri* Assembly_CSharp::WEB_HANDLER::URL_BUILDER(int32_t cmd, mscorlib::System::String* paramsLine)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "URL_BUILDER", std::vector<std::string> { "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&cmd;
	params[1] = (intptr_t)paramsLine;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::System::Uri*)returnValue;
}
mscorlib::System::String* Assembly_CSharp::WEB_HANDLER::WRITE_STANDART()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WRITE_STANDART");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Assembly_CSharp::WEB_HANDLER::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
