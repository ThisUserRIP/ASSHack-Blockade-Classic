#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::Caching { struct HTTPCacheFileInfo; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace Assembly_CSharp::BestHTTP::Cookies { struct Cookie; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
namespace mscorlib::System::IO { struct Stream; };
namespace System_Core::System::Threading { struct ReaderWriterLockSlim; };
namespace Assembly_CSharp::BestHTTP::Extensions { struct BufferPoolMemoryStream; };
namespace Assembly_CSharp::BestHTTP::Decompression::Zlib { struct GZipStream; };
namespace mscorlib::System::Threading { struct AutoResetEvent; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRange; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };

namespace Assembly_CSharp::BestHTTP
{
	struct HTTPResponse : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _VersionMajor_k__BackingField;
		int32_t _VersionMinor_k__BackingField;
		int32_t _StatusCode_k__BackingField;
		mscorlib::System::String* _Message_k__BackingField;
		bool _IsStreamed_k__BackingField;
		bool _IsStreamingFinished_k__BackingField;
		bool _IsFromCache_k__BackingField;
		Assembly_CSharp::BestHTTP::Caching::HTTPCacheFileInfo* _CacheFileInfo_k__BackingField;
		bool _IsCacheOnly_k__BackingField;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>>* _Headers_k__BackingField;
		IL2CPP::Array<uint8_t>* _Data_k__BackingField;
		bool _IsUpgraded_k__BackingField;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::Cookies::Cookie>* _Cookies_k__BackingField;
		mscorlib::System::String* dataAsText;
		UnityEngine_CoreModule::UnityEngine::Texture2D* texture;
		bool _IsClosedManually_k__BackingField;
		Assembly_CSharp::BestHTTP::HTTPRequest* baseRequest;
		mscorlib::System::IO::Stream* Stream;
		mscorlib::System::Collections::Generic::List_1<IL2CPP::Array<mscorlib::System::Byte>>* streamedFragments;
		System_Core::System::Threading::ReaderWriterLockSlim* rwLock;
		IL2CPP::Array<uint8_t>* fragmentBuffer;
		int32_t fragmentBufferDataLength;
		mscorlib::System::IO::Stream* cacheStream;
		int32_t allFragmentSize;
		Assembly_CSharp::BestHTTP::Extensions::BufferPoolMemoryStream* decompressorInputStream;
		Assembly_CSharp::BestHTTP::Extensions::BufferPoolMemoryStream* decompressorOutputStream;
		Assembly_CSharp::BestHTTP::Decompression::Zlib::GZipStream* decompressorGZipStream;
		mscorlib::System::Threading::AutoResetEvent* fragmentWaitEvent;
		struct StaticFields
		{
			uint8_t CR;
			uint8_t LF;
			int32_t MinBufferSize;
			int32_t MinLengthToDecompress;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		int32_t get_VersionMajor();
		void set_VersionMajor(int32_t value);
		int32_t get_VersionMinor();
		void set_VersionMinor(int32_t value);
		int32_t get_StatusCode();
		void set_StatusCode(int32_t value);
		bool get_IsSuccess();
		mscorlib::System::String* get_Message();
		void set_Message(mscorlib::System::String* value);
		bool get_IsStreamed();
		void set_IsStreamed(bool value);
		bool get_IsStreamingFinished();
		void set_IsStreamingFinished(bool value);
		bool get_IsFromCache();
		void set_IsFromCache(bool value);
		Assembly_CSharp::BestHTTP::Caching::HTTPCacheFileInfo* get_CacheFileInfo();
		void set_CacheFileInfo(Assembly_CSharp::BestHTTP::Caching::HTTPCacheFileInfo* value);
		bool get_IsCacheOnly();
		void set_IsCacheOnly(bool value);
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>>* get_Headers();
		void set_Headers(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>>* value);
		IL2CPP::Array<uint8_t>* get_Data();
		void set_Data(IL2CPP::Array<uint8_t>* value);
		bool get_IsUpgraded();
		void set_IsUpgraded(bool value);
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::Cookies::Cookie>* get_Cookies();
		void set_Cookies(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::Cookies::Cookie>* value);
		mscorlib::System::String* get_DataAsText();
		UnityEngine_CoreModule::UnityEngine::Texture2D* get_DataAsTexture2D();
		bool get_IsClosedManually();
		void set_IsClosedManually(bool value);
		void _ctor(Assembly_CSharp::BestHTTP::HTTPRequest* request, mscorlib::System::IO::Stream* stream, bool isStreamed, bool isFromCache);
		bool Receive(int32_t forceReadRawContentLength, bool readPayloadData);
		bool ReadPayload(int32_t forceReadRawContentLength);
		void ReadHeaders(mscorlib::System::IO::Stream* stream);
		void AddHeader(mscorlib::System::String* name, mscorlib::System::String* value);
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* GetHeaderValues(mscorlib::System::String* name);
		mscorlib::System::String* GetFirstHeaderValue(mscorlib::System::String* name);
		bool HasHeaderWithValue(mscorlib::System::String* headerName, mscorlib::System::String* value);
		bool HasHeader(mscorlib::System::String* headerName);
		Assembly_CSharp::BestHTTP::HTTPRange* GetRange();
		static mscorlib::System::String* ReadTo(mscorlib::System::IO::Stream* stream, uint8_t blocker);
		static mscorlib::System::String* ReadTo(mscorlib::System::IO::Stream* stream, uint8_t blocker1, uint8_t blocker2);
		static mscorlib::System::String* NoTrimReadTo(mscorlib::System::IO::Stream* stream, uint8_t blocker1, uint8_t blocker2);
		int32_t ReadChunkLength(mscorlib::System::IO::Stream* stream);
		void ReadChunked(mscorlib::System::IO::Stream* stream);
		void ReadRaw(mscorlib::System::IO::Stream* stream, int64_t contentLength);
		void ReadUnknownSize(mscorlib::System::IO::Stream* stream);
		IL2CPP::Array<uint8_t>* DecodeStream(Assembly_CSharp::BestHTTP::Extensions::BufferPoolMemoryStream* streamToDecode);
		void CloseDecompressors();
		IL2CPP::Array<uint8_t>* Decompress(IL2CPP::Array<uint8_t>* data, int32_t offset, int32_t count, bool forceDecompress);
		void BeginReceiveStreamFragments();
		void FeedStreamFragment(IL2CPP::Array<uint8_t>* buffer, int32_t pos, int32_t length);
		void FlushRemainingFragmentBuffer();
		void AddStreamedFragment(IL2CPP::Array<uint8_t>* buffer);
		void WaitWhileFragmentQueueIsFull();
		bool FragmentQueueIsFull();
		mscorlib::System::Collections::Generic::List_1<IL2CPP::Array<mscorlib::System::Byte>>* GetStreamedFragments();
		bool HasStreamedFragments();
		void FinishStreaming();
		void VerboseLogging(mscorlib::System::String* str);
		void Dispose();
	};
}

