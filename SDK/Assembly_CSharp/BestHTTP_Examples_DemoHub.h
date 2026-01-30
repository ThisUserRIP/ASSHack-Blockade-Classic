#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SignalR_Hubs_Hub.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::Examples { struct GUIMessageList; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SignalR::Hubs { struct Hub; };
#include "BestHTTP_SignalR_Messages_ClientMessage.h"
namespace Assembly_CSharp::BestHTTP::SignalR::Messages { struct ClientMessage; };
namespace Assembly_CSharp::BestHTTP::SignalR::Messages { struct ProgressMessage; };
namespace Assembly_CSharp::BestHTTP::SignalR::Messages { struct ResultMessage; };
namespace Assembly_CSharp::BestHTTP::SignalR::Messages { struct FailureMessage; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SignalR::Messages { struct MethodCallMessage; };

namespace Assembly_CSharp::BestHTTP::Examples
{
	struct DemoHub : Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float longRunningJobProgress;
		mscorlib::System::String* longRunningJobStatus;
		mscorlib::System::String* fromArbitraryCodeResult;
		mscorlib::System::String* groupAddedResult;
		mscorlib::System::String* dynamicTaskResult;
		mscorlib::System::String* genericTaskResult;
		mscorlib::System::String* taskWithExceptionResult;
		mscorlib::System::String* genericTaskWithExceptionResult;
		mscorlib::System::String* synchronousExceptionResult;
		mscorlib::System::String* invokingHubMethodWithDynamicResult;
		mscorlib::System::String* simpleArrayResult;
		mscorlib::System::String* complexTypeResult;
		mscorlib::System::String* complexArrayResult;
		mscorlib::System::String* voidOverloadResult;
		mscorlib::System::String* intOverloadResult;
		mscorlib::System::String* readStateResult;
		mscorlib::System::String* plainTaskResult;
		mscorlib::System::String* genericTaskWithContinueWithResult;
		Assembly_CSharp::BestHTTP::Examples::GUIMessageList* invokeResults;
		void _ctor();
		void ReportProgress(mscorlib::System::String* arg);
		void OnLongRunningJob_Progress(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage originialMessage, Assembly_CSharp::BestHTTP::SignalR::Messages::ProgressMessage* progress);
		void OnLongRunningJob_Done(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage originalMessage, Assembly_CSharp::BestHTTP::SignalR::Messages::ResultMessage* result);
		void MultipleCalls();
		void DynamicTask();
		void OnDynamicTask_Failed(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage originalMessage, Assembly_CSharp::BestHTTP::SignalR::Messages::FailureMessage* result);
		void OnDynamicTask_Done(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage originalMessage, Assembly_CSharp::BestHTTP::SignalR::Messages::ResultMessage* result);
		void AddToGroups();
		void GetValue();
		void TaskWithException();
		void GenericTaskWithException();
		void SynchronousException();
		void PassingDynamicComplex(mscorlib::System::Object* person);
		void SimpleArray(IL2CPP::Array<int32_t>* array);
		void ComplexType(mscorlib::System::Object* person);
		void ComplexArray(IL2CPP::Array<mscorlib::System::Object*>* complexArray);
		void Overload();
		void OnVoidOverload_Done(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage originalMessage, Assembly_CSharp::BestHTTP::SignalR::Messages::ResultMessage* result);
		void Overload(int32_t number);
		void OnIntOverload_Done(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage originalMessage, Assembly_CSharp::BestHTTP::SignalR::Messages::ResultMessage* result);
		void ReadStateValue();
		void PlainTask();
		void GenericTaskWithContinueWith();
		void FromArbitraryCode(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::MethodCallMessage* methodCall);
		void GroupAdded(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::MethodCallMessage* methodCall);
		void Signal(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::MethodCallMessage* methodCall);
		void Invoke(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::MethodCallMessage* methodCall);
		void Draw();
		void _GetValue_b__28_0(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage msg, Assembly_CSharp::BestHTTP::SignalR::Messages::ResultMessage* result);
		void _TaskWithException_b__29_0(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage msg, Assembly_CSharp::BestHTTP::SignalR::Messages::FailureMessage* error);
		void _GenericTaskWithException_b__30_0(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage msg, Assembly_CSharp::BestHTTP::SignalR::Messages::FailureMessage* error);
		void _SynchronousException_b__31_0(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage msg, Assembly_CSharp::BestHTTP::SignalR::Messages::FailureMessage* error);
		void _PassingDynamicComplex_b__32_0(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage msg, Assembly_CSharp::BestHTTP::SignalR::Messages::ResultMessage* result);
		void _SimpleArray_b__33_0(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage msg, Assembly_CSharp::BestHTTP::SignalR::Messages::ResultMessage* result);
		void _ComplexType_b__34_0(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage msg, Assembly_CSharp::BestHTTP::SignalR::Messages::ResultMessage* result);
		void _ComplexArray_b__35_0(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage msg, Assembly_CSharp::BestHTTP::SignalR::Messages::ResultMessage* result);
		void _ReadStateValue_b__40_0(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage msg, Assembly_CSharp::BestHTTP::SignalR::Messages::ResultMessage* result);
		void _PlainTask_b__41_0(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage msg, Assembly_CSharp::BestHTTP::SignalR::Messages::ResultMessage* result);
		void _GenericTaskWithContinueWith_b__42_0(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage msg, Assembly_CSharp::BestHTTP::SignalR::Messages::ResultMessage* result);
	};
}

