# MultiShader

学校内の授業で作成したものをベースに様々な改良を加えました。

【実装内容(授業内含む)】

・JavaScriptによるhlsl読み込み

・レンダーバッファの自動生成(頂点バッファ、インデックスバッファ)

・マテリアルの生成簡易化 (CBuffer,Texture,Samplear,Blend,Rasterize,ZTest)

・レンダーターゲット生成簡易化(RTV)
 
 ・デプスステンシル生成簡易化(DSV)

・レイアウトインプットの自動化

・マルチレンダーターゲット実装

・デバッグ機能実装

→実行ファイル内でのシェーダー切り替え機能

→テクスチャの視覚化


【デバッグ操作方法】

ESC : デバッグメニュー表示

切り替え : ←→

決定 : ENTER


◆実装シェーダ

・シャドウマップ

・デプスフェード

・ポイントライト

・スポットライト

・ディファードレンダリング

・ライトブルーム

・被写界深度