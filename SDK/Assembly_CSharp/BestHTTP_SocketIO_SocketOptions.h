#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_SocketIO_Transports_TransportTypes.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::PlatformSupport::Collections::ObjectModel { template <typename TKey, typename TValue> struct ObservableDictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace Assembly_CSharp::PlatformSupport::Collections::Specialized { struct NotifyCollectionChangedEventArgs; };

namespace Assembly_CSharp::BestHTTP::SocketIO
{
	struct SocketOptions : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SocketIO::Transports::TransportTypes _ConnectWith_k__BackingField;
		bool _Reconnection_k__BackingField;
		int32_t _ReconnectionAttempts_k__BackingField;
		mscorlib::System::TimeSpan _ReconnectionDelay_k__BackingField;
		mscorlib::System::TimeSpan _ReconnectionDelayMax_k__BackingField;
		float randomizationFactor;
		mscorlib::System::TimeSpan _Timeout_k__BackingField;
		bool _AutoConnect_k__BackingField;
		Assembly_CSharp::PlatformSupport::Collections::ObjectModel::ObservableDictionary_2<mscorlib::System::String, mscorlib::System::String>* additionalQueryParams;
		bool _QueryParamsOnlyForHandshake_k__BackingField;
		mscorlib::System::String* BuiltQueryParams;
		Assembly_CSharp::BestHTTP::SocketIO::Transports::TransportTypes get_ConnectWith();
		void set_ConnectWith(Assembly_CSharp::BestHTTP::SocketIO::Transports::TransportTypes value);
		bool get_Reconnection();
		void set_Reconnection(bool value);
		int32_t get_ReconnectionAttempts();
		void set_ReconnectionAttempts(int32_t value);
		mscorlib::System::TimeSpan get_ReconnectionDelay();
		void set_ReconnectionDelay(mscorlib::System::TimeSpan value);
		mscorlib::System::TimeSpan get_ReconnectionDelayMax();
		void set_ReconnectionDelayMax(mscorlib::System::TimeSpan value);
		float get_RandomizationFactor();
		void set_RandomizationFactor(float value);
		mscorlib::System::TimeSpan get_Timeout();
		void set_Timeout(mscorlib::System::TimeSpan value);
		bool get_AutoConnect();
		void set_AutoConnect(bool value);
		Assembly_CSharp::PlatformSupport::Collections::ObjectModel::ObservableDictionary_2<mscorlib::System::String, mscorlib::System::String>* get_AdditionalQueryParams();
		void set_AdditionalQueryParams(Assembly_CSharp::PlatformSupport::Collections::ObjectModel::ObservableDictionary_2<mscorlib::System::String, mscorlib::System::String>* value);
		bool get_QueryParamsOnlyForHandshake();
		void set_QueryParamsOnlyForHandshake(bool value);
		void _ctor();
		mscorlib::System::String* BuildQueryParams();
		void AdditionalQueryParams_CollectionChanged(mscorlib::System::Object* sender, Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventArgs* e);
	};
}

