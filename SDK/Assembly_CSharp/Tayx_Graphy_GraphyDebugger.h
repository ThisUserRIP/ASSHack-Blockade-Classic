#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Tayx_Graphy_Utils_G_Singleton_1.h"
namespace Assembly_CSharp::Tayx::Graphy { struct GraphyDebugger_DebugPacket; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp::Tayx::Graphy::Fps { struct G_FpsMonitor; };
namespace Assembly_CSharp::Tayx::Graphy::Ram { struct G_RamMonitor; };
namespace Assembly_CSharp::Tayx::Graphy::Audio { struct G_AudioMonitor; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Tayx_Graphy_GraphyDebugger_DebugCondition.h"
namespace Assembly_CSharp::Tayx::Graphy { struct GraphyDebugger_DebugCondition; };
#include "Tayx_Graphy_GraphyDebugger_MessageType.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Action; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "Tayx_Graphy_GraphyDebugger_DebugVariable.h"

namespace Assembly_CSharp::Tayx::Graphy
{
	struct GraphyDebugger : Assembly_CSharp::Tayx::Graphy::Utils::G_Singleton_1<Assembly_CSharp::Tayx::Graphy::GraphyDebugger>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Tayx::Graphy::GraphyDebugger_DebugPacket>* m_debugPackets;
		Assembly_CSharp::Tayx::Graphy::Fps::G_FpsMonitor* m_fpsMonitor;
		Assembly_CSharp::Tayx::Graphy::Ram::G_RamMonitor* m_ramMonitor;
		Assembly_CSharp::Tayx::Graphy::Audio::G_AudioMonitor* m_audioMonitor;
		void _ctor();
		void Start();
		void Update();
		void AddNewDebugPacket(Assembly_CSharp::Tayx::Graphy::GraphyDebugger_DebugPacket* newDebugPacket);
		void AddNewDebugPacket(int32_t newId, Assembly_CSharp::Tayx::Graphy::GraphyDebugger_DebugCondition newDebugCondition, Assembly_CSharp::Tayx::Graphy::GraphyDebugger_MessageType newMessageType, mscorlib::System::String* newMessage, bool newDebugBreak, mscorlib::System::Action* newCallback);
		void AddNewDebugPacket(int32_t newId, mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Tayx::Graphy::GraphyDebugger_DebugCondition>* newDebugConditions, Assembly_CSharp::Tayx::Graphy::GraphyDebugger_MessageType newMessageType, mscorlib::System::String* newMessage, bool newDebugBreak, mscorlib::System::Action* newCallback);
		void AddNewDebugPacket(int32_t newId, Assembly_CSharp::Tayx::Graphy::GraphyDebugger_DebugCondition newDebugCondition, Assembly_CSharp::Tayx::Graphy::GraphyDebugger_MessageType newMessageType, mscorlib::System::String* newMessage, bool newDebugBreak, mscorlib::System::Collections::Generic::List_1<mscorlib::System::Action>* newCallbacks);
		void AddNewDebugPacket(int32_t newId, mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Tayx::Graphy::GraphyDebugger_DebugCondition>* newDebugConditions, Assembly_CSharp::Tayx::Graphy::GraphyDebugger_MessageType newMessageType, mscorlib::System::String* newMessage, bool newDebugBreak, mscorlib::System::Collections::Generic::List_1<mscorlib::System::Action>* newCallbacks);
		Assembly_CSharp::Tayx::Graphy::GraphyDebugger_DebugPacket* GetFirstDebugPacketWithId(int32_t packetId);
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Tayx::Graphy::GraphyDebugger_DebugPacket>* GetAllDebugPacketsWithId(int32_t packetId);
		void RemoveFirstDebugPacketWithId(int32_t packetId);
		void RemoveAllDebugPacketsWithId(int32_t packetId);
		void AddCallbackToFirstDebugPacketWithId(mscorlib::System::Action* callback, int32_t id);
		void AddCallbackToAllDebugPacketWithId(mscorlib::System::Action* callback, int32_t id);
		void CheckDebugPackets();
		bool CheckIfConditionIsMet(Assembly_CSharp::Tayx::Graphy::GraphyDebugger_DebugCondition debugCondition);
		float GetRequestedValueFromDebugVariable(Assembly_CSharp::Tayx::Graphy::GraphyDebugger_DebugVariable debugVariable);
		void ExecuteOperationsInDebugPacket(Assembly_CSharp::Tayx::Graphy::GraphyDebugger_DebugPacket* debugPacket);
	};
}

