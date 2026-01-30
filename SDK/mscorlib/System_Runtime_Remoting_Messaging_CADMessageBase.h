#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct CADArgHolder; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMethodMessage; };
namespace mscorlib::System::Reflection { struct MethodBase; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections { struct IDictionary; };
namespace mscorlib::System::Collections { struct ArrayList; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct LogicalCallContext; };

namespace mscorlib::System::Runtime::Remoting::Messaging
{
	struct CADMessageBase : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::Object*>* _args;
		IL2CPP::Array<uint8_t>* _serializedArgs;
		int32_t _propertyCount;
		mscorlib::System::Runtime::Remoting::Messaging::CADArgHolder* _callContext;
		IL2CPP::Array<uint8_t>* serializedMethod;
		void _ctor(mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage* msg);
		mscorlib::System::Reflection::MethodBase* GetMethod();
		static IL2CPP::Array<mscorlib::System::Type*>* GetSignature(mscorlib::System::Reflection::MethodBase* methodBase, bool load);
		static int32_t MarshalProperties(mscorlib::System::Collections::IDictionary* dict, mscorlib::System::Collections::ArrayList& args);
		static void UnmarshalProperties(mscorlib::System::Collections::IDictionary* dict, int32_t count, mscorlib::System::Collections::ArrayList* args);
		static bool IsPossibleToIgnoreMarshal(mscorlib::System::Object* obj);
		mscorlib::System::Object* MarshalArgument(mscorlib::System::Object* arg, mscorlib::System::Collections::ArrayList& args);
		mscorlib::System::Object* UnmarshalArgument(mscorlib::System::Object* arg, mscorlib::System::Collections::ArrayList* args);
		IL2CPP::Array<mscorlib::System::Object*>* MarshalArguments(IL2CPP::Array<mscorlib::System::Object*>* arguments, mscorlib::System::Collections::ArrayList& args);
		IL2CPP::Array<mscorlib::System::Object*>* UnmarshalArguments(IL2CPP::Array<mscorlib::System::Object*>* arguments, mscorlib::System::Collections::ArrayList* args);
		void SaveLogicalCallContext(mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage* msg, mscorlib::System::Collections::ArrayList& serializeList);
		mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext* GetLogicalCallContext(mscorlib::System::Collections::ArrayList* args);
	};
}

