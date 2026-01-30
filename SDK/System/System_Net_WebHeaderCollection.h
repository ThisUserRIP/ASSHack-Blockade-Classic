#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Collections_Specialized_NameValueCollection.h"
namespace System::System::Net { struct HeaderInfoTable; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_SByte.h"
namespace mscorlib::System { struct SByte; };
namespace System::System::Collections::Specialized { struct NameValueCollection; };
#include "System_Net_WebHeaderCollectionType.h"
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_Net_WebHeaderCollection_RfcChar.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Net_HttpRequestHeader.h"
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "..\mscorlib\System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace System::System::Net
{
	struct WebHeaderCollection : System::Collections::Specialized::NameValueCollection
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::String*>* m_CommonHeaders;
		int32_t m_NumCommonHeaders;
		System::Collections::Specialized::NameValueCollection* m_InnerCollection;
		System::Net::WebHeaderCollectionType m_Type;
		struct StaticFields
		{
			System::Net::HeaderInfoTable* HInfo;
			IL2CPP::Array<mscorlib::System::String*>* s_CommonHeaderNames;
			IL2CPP::Array<int8_t>* s_CommonHeaderHints;
			IL2CPP::Array<wchar_t>* HttpTrimCharacters;
			IL2CPP::Array<System::Net::WebHeaderCollection_RfcChar>* RfcCharMap;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void NormalizeCommonHeaders();
		System::Collections::Specialized::NameValueCollection* get_InnerCollection();
		static bool AllowMultiValues(mscorlib::System::String* name);
		bool get_AllowHttpRequestHeader();
		void Remove(System::Net::HttpRequestHeader header);
		void AddInternal(mscorlib::System::String* name, mscorlib::System::String* value);
		void ChangeInternal(mscorlib::System::String* name, mscorlib::System::String* value);
		void RemoveInternal(mscorlib::System::String* name);
		void CheckUpdate(mscorlib::System::String* name, mscorlib::System::String* value);
		static mscorlib::System::String* CheckBadChars(mscorlib::System::String* name, bool isHeaderValue);
		static bool ContainsNonAsciiChars(mscorlib::System::String* token);
		void ThrowOnRestrictedHeader(mscorlib::System::String* headerName);
		void Add(mscorlib::System::String* name, mscorlib::System::String* value);
		void Add(mscorlib::System::String* header);
		void Set(mscorlib::System::String* name, mscorlib::System::String* value);
		void SetInternal(mscorlib::System::String* name, mscorlib::System::String* value);
		void Remove(mscorlib::System::String* name);
		IL2CPP::Array<mscorlib::System::String*>* GetValues(mscorlib::System::String* header);
		mscorlib::System::String* ToString();
		static mscorlib::System::String* GetAsString(System::Collections::Specialized::NameValueCollection* cc, bool winInetCompat, bool forTrace);
		void _ctor();
		void _ctor(System::Net::WebHeaderCollectionType type);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext);
		void OnDeserialization(mscorlib::System::Object* sender);
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext);
		void System_Runtime_Serialization_ISerializable_GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext);
		mscorlib::System::String* Get(mscorlib::System::String* name);
		mscorlib::System::Collections::IEnumerator* GetEnumerator();
		int32_t get_Count();
		mscorlib::System::String* Get(int32_t index);
		mscorlib::System::String* GetKey(int32_t index);
		IL2CPP::Array<mscorlib::System::String*>* get_AllKeys();
		static void _cctor();
	};
}

