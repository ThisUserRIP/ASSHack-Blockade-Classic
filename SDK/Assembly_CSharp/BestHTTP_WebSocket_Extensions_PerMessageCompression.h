#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "BestHTTP_Decompression_Zlib_CompressionLevel.h"
namespace Assembly_CSharp::BestHTTP::Extensions { struct BufferPoolMemoryStream; };
namespace Assembly_CSharp::BestHTTP::Decompression::Zlib { struct DeflateStream; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
namespace Assembly_CSharp::BestHTTP::WebSocket { struct WebSocketResponse; };
namespace Assembly_CSharp::BestHTTP::WebSocket::Frames { struct WebSocketFrame; };

namespace Assembly_CSharp::BestHTTP::WebSocket::Extensions
{
	struct PerMessageCompression : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _ClientNoContextTakeover_k__BackingField;
		bool _ServerNoContextTakeover_k__BackingField;
		int32_t _ClientMaxWindowBits_k__BackingField;
		int32_t _ServerMaxWindowBits_k__BackingField;
		Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionLevel _Level_k__BackingField;
		int32_t _MinimumDataLegthToCompress_k__BackingField;
		Assembly_CSharp::BestHTTP::Extensions::BufferPoolMemoryStream* compressorOutputStream;
		Assembly_CSharp::BestHTTP::Decompression::Zlib::DeflateStream* compressorDeflateStream;
		Assembly_CSharp::BestHTTP::Extensions::BufferPoolMemoryStream* decompressorInputStream;
		Assembly_CSharp::BestHTTP::Extensions::BufferPoolMemoryStream* decompressorOutputStream;
		Assembly_CSharp::BestHTTP::Decompression::Zlib::DeflateStream* decompressorDeflateStream;
		struct StaticFields
		{
			int32_t MinDataLengthToCompressDefault;
			IL2CPP::Array<uint8_t>* Trailer;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool get_ClientNoContextTakeover();
		void set_ClientNoContextTakeover(bool value);
		bool get_ServerNoContextTakeover();
		void set_ServerNoContextTakeover(bool value);
		int32_t get_ClientMaxWindowBits();
		void set_ClientMaxWindowBits(int32_t value);
		int32_t get_ServerMaxWindowBits();
		void set_ServerMaxWindowBits(int32_t value);
		Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionLevel get_Level();
		void set_Level(Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionLevel value);
		int32_t get_MinimumDataLegthToCompress();
		void set_MinimumDataLegthToCompress(int32_t value);
		void _ctor();
		void _ctor(Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionLevel level, bool clientNoContextTakeover, bool serverNoContextTakeover, int32_t desiredClientMaxWindowBits, int32_t desiredServerMaxWindowBits, int32_t minDatalengthToCompress);
		void AddNegotiation(Assembly_CSharp::BestHTTP::HTTPRequest* request);
		bool ParseNegotiation(Assembly_CSharp::BestHTTP::WebSocket::WebSocketResponse* resp);
		uint8_t GetFrameHeader(Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrame* writer, uint8_t inFlag);
		IL2CPP::Array<uint8_t>* Encode(Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrame* writer);
		IL2CPP::Array<uint8_t>* Decode(uint8_t header, IL2CPP::Array<uint8_t>* data, int32_t length);
		IL2CPP::Array<uint8_t>* Compress(IL2CPP::Array<uint8_t>* data, int32_t length);
		IL2CPP::Array<uint8_t>* Decompress(IL2CPP::Array<uint8_t>* data, int32_t length);
		static void _cctor();
	};
}

